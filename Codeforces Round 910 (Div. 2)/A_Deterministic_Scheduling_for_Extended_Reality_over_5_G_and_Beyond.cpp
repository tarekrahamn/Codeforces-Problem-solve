#include <iostream>
#include <vector>
#include <cmath>
#include <lp_lib.h>

using namespace std;

void solve(int N, int K, int T, int R, vector<vector<float>>& s0, vector<vector<float>>& d, int J, vector<vector<int>>& frames) {
    int numVariables = R * K * T * N;

    lprec* lp;
    REAL* row = NULL;
    int* colno = NULL;
    int i, j;
    char buf[100];

    lp = make_lp(0, numVariables);
    if (lp == NULL) {
        cerr << "Unable to create LP model" << endl;
        return;
    }

    colno = (int*)malloc(numVariables * sizeof(*colno));
    row = (REAL*)malloc(numVariables * sizeof(*row));

    if ((colno == NULL) || (row == NULL)) {
        cerr << "Memory allocation failed" << endl;
        return;
    }

    set_add_rowmode(lp, TRUE);

    // Set objective function
    for (i = 0; i < numVariables; i++) {
        colno[i] = i + 1;
        row[i] = 0;
    }
    set_obj_fn(lp, row);

    set_add_rowmode(lp, FALSE);

    // Set constraints
    for (j = 0; j < J; j++) {
        for (int t = frames[j][3]; t <= frames[j][3] + frames[j][4] - 1; t++) {
            for (int r = 0; r < R; r++) {
                for (int k = 0; k < K; k++) {
                    for (int n = 0; n < N; n++) {
                        row[k * R * T * N + r * T * N + t * N + n] = log(1 + s0[k][r * T + t]) * frames[j][1];
                    }
                }
            }
        }
    }

    // Add constraints to the model
    for (int n = 0; n < N; n++) {
        for (int t = 0; t < T; t++) {
            for (int r = 0; r < R; r++) {
                for (int k = 0; k < K; k++) {
                    set_bounds(lp, n * R * K * T + r * K * T + k * T + t + 1, 0, 4);
                }
            }
        }
    }

    // Set optimization direction to maximize
    set_maxim(lp);

    // Solve the problem
    int result = solve(lp);

    // Check for errors
    if (result != OPTIMAL) {
        cerr << "Unable to find optimal solution" << endl;
        return;
    }

    // Get results
    get_variables(lp, row);

    // Output the results
    for (int t = 0; t < T; t++) {
        for (int k = 0; k < K; k++) {
            for (int r = 0; r < R; r++) {
                for (int n = 0; n < N; n++) {
                    printf("%.6f ", row[k * R * T * N + r * T * N + t * N + n]);
                }
                cout << endl;
            }
        }
    }

    // Clean up
    delete_lp(lp);
    free(row);
    free(colno);
}

int main() {
    int N, K, T, R, J;
    cin >> N >> K >> T >> R;

    vector<vector<float>> s0(N, vector<float>(R * T));
    vector<vector<float>> d(N, vector<float>(N * R));
    vector<vector<int>> frames(J, vector<int>(5));

    // Input SINRs s0
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < R * T; j++) {
            cin >> s0[i][j];
        }
    }

    // Input interference factors d
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N * R; j++) {
            cin >> d[i][j];
        }
    }

    // Input frame information
    cin >> J;
    for (int i = 0; i < J; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> frames[i][j];
        }
    }

    // Call the solve function
    solve(N, K, T, R, s0, d, J, frames);

    return 0;
}
