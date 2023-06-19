#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void generateGrid(int n, int m) {
    vector<int> grid(n * m);
    for (int i = 0; i < n * m; ++i)
        grid[i] = i + 11;

    vector<vector<int>> result(n, vector<int>(m));

    int idx = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if ((i + j) % 2 == 0)
                result[i][j] = grid[idx++];
            else
                result[i][j] = grid[n * m - idx];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        generateGrid(n, m);
        cout << endl;
    }

    return 0;
}
