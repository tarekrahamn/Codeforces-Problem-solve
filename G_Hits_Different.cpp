#include <bits/stdc++.h>
using namespace std;

const int N = 2023;
int dp[N][N];
vector<pair<int, int>> m((N + 1) * (N + 2) / 2);

void run() {
    int c = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            m[c] = make_pair(i, j);
            dp[i][j] = c * c;

            if (i > 0) {
                dp[i][j] += dp[i - 1][j];
                if (j > 0) {
                    dp[i][j] += dp[i - 1][j - 1];
                    if (i > 1) {
                        dp[i][j] -= dp[i - 2][j - 1];
                    }
                }
            }
            c++;
        }
    }
}

void solve() {
    int n;
    cin >> n;
    int p = m[n].first;
    int q = m[n].second;
    cout << dp[p][q] << endl;
}

int main() {
    run();
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
