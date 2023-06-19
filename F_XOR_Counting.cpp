#include <bits/stdc++.h>
using namespace std;
#define     ll                                long long int
const int MOD = 998244353;
const int MAX_M = 100000;
const int MAX_XOR = 1LL << 64;

int dp[2][MAX_M + 1][2];
int cnt[MAX_XOR];
int inv2[MAX_XOR];

void init() {
    for (int i = 0; i < MAX_XOR; i++) {
        cnt[i] = cnt[i >> 1] + (i & 1);
        inv2[i] = (i == 0 ? 1 : inv2[i >> 1] * 2LL % MOD);
    }
}

int main() {
    init();

    int t;
    cin >> t;

    while (t--) {
        long long n;
        int m;
        cin >> n >> m;

        int cur = 0;
        dp[cur][0][0] = 1;
        for (int i = 1; i <= m; i++) {
            int val;
            cin >> val;

            int nxt = cur ^ 1;
            for (int j = 0; j <= n; j++) {
                for (int k = 0; k < 2; k++) {
                    dp[nxt][j][k] = 0;
                }
            }

            for (int j = 0; j <= n; j++) {
                for (int k = 0; k < 2; k++) {
                    int ways = dp[cur][j][k];
                    if (ways == 0) {
                        continue;
                    }

                    for (int x = 0; x <= val && x <= n-j; x++) {
                        int nxt_xor = k ^ (j % 2) ^ (x % 2);
                        int nxt_ways = ways * inv2[cnt[nxt_xor]];
                        dp[nxt][j+x][nxt_xor] = (dp[nxt][j+x][nxt_xor] + nxt_ways) % MOD;
                    }
                }
            }

            cur = nxt;
        }

        int ans = 0;
        for (int k = 0; k < 2; k++) {
            ans = (ans + dp[cur][n][k]) % MOD;
        }
        cout << ans << endl;
    }

    return 0;
}
