#include <iostream>
#include <algorithm>
#include <vector>

#define int long long
#define mod 1000000007

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(n);
    vector<int> b(n), ans(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    cin >> b;
    sort(des(a));
    sort(all(b));

    int ind = 0;
    bool possible = true;

    for (int i = k - 1; i >= 0; i--) {
        if (a[i].first > b[ind]) {
            ans[a[i].second] = b[ind++];
        } else {
            possible = false;
            break;
        }
    }

    ind = n - 1;

    for (int i = k; i < n; i++) {
        if (a[i].first > b[ind]) {
            possible = false;
            break;
        } else {
            ans[a[i].second] = b[ind--];
        }
    }

    if (!possible) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
