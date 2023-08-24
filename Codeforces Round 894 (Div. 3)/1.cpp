#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        char carpet[20][20];
        for (int i = 0; i < n; ++i) {
            cin >> carpet[i];
        }

        bool found = false;

        for (int c1 = 0; c1 < m; ++c1) {
            for (int c2 = c1 + 1; c2 < m; ++c2) {
                for (int c3 = c2 + 1; c3 < m; ++c3) {
                    for (int c4 = c3 + 1; c4 < m; ++c4) {
                        int colOffsets[4] = {c1, c2, c3, c4};
                        int currCol = 0;

                        for (int r = 0; r < n; ++r) {
                            if (carpet[r][colOffsets[currCol]] == 'v' + currCol) {
                                ++currCol;
                                if (currCol == 4) {
                                    found = true;
                                    break;
                                }
                            }
                        }

                        if (found) {
                            break;
                        }
                    }

                    if (found) {
                        break;
                    }
                }

                if (found) {
                    break;
                }
            }

            if (found) {
                break;
            }
        }

        if (!found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
