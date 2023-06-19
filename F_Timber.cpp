#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    // Step 1: Find the number of alleys with unfilled spots
    vector<vector<vector<int>>> dp(n+2, vector<vector<int>>(m+1, vector<int>(2)));
    dp[0][0][0] = dp[0][0][1] = 1;
    for (int i = 1; i <= n+1; i++) {
        for (int j = 0; j <= m; j++) {
            if (i > k+1+j) {
                dp[i][j][0] = (dp[i-1][j][0] + dp[i-1][j-1][1]) % MOD;
            }
            if (i > k+1+j) {
                dp[i][j][1] = (dp[i-1][j][1] + dp[i-1][j-1][0]) % MOD;
            }
        }
    }
    int ans = 0;
    for (int j = 0; j <= m; j++) {
        ans = (ans + dp[n+1][m-j][0] + dp[n+1][m-j][1]) % MOD;
    }

    // Step 2: Fill the unfilled spots
    vector<vector<int>> f(n+2, vector<int>(m+1));
    f[0][0] = 1;
    for (int i = 1; i <= n+1; i++) {
        for (int j = 0; j <= m; j++) {
            if (i <= k || i > n-k || (i >= k+2 && i <= n-k-1)) {
                if (j > 0) {
                    f[i][j] = f[i-1][j-1];
                }
            } else {
                if (j > 0) {
                    f[i][j] = (f[i-1][j] + f[i-1][j-1]) % MOD;
                } else {
                    f[i][j] = f[i-1][j];
                }
            }
        }
    }
    ans = (ans * f[n+1][m]) % MOD;

    cout << ans << endl;
    return 0;
}
