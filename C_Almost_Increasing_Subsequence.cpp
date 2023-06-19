#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> dp(n, 1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i] && dp[j] + 1 > dp[i]) {
                dp[i] = dp[j] + 1;
            } else if (a[j] >= a[i] && j > 0 && a[j-1] < a[i] && dp[j-1] + 1 > dp[i]) {
                dp[i] = dp[j-1] + 1;
            } else if (j == 0 && a[j] < a[i]) {
                dp[i] = 2;
            }
        }
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        l--, r--;
        int ans = 0;
        for (int i = l; i <= r; i++) {
            ans = max(ans, dp[i]);
        }
        cout << ans << '\n';
    }

    return 0;
}
