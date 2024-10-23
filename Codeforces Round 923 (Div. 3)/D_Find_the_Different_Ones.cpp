#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int q;
        cin >> q;

        unordered_map<int, int> lastSeen;
        vector<pair<int, int>> results;

        for (int query = 0; query < q; ++query) {
            int l, r;
            cin >> l >> r;

            --l; // Convert to 0-based index
            --r;

            bool found = false;

            for (int i = l; i <= r; ++i) {
                if (lastSeen.find(a[i]) != lastSeen.end()) {
                    results.push_back({lastSeen[a[i]] + 1, i + 1});
                    found = true;
                    break;
                }
                lastSeen[a[i]] = i;
            }

            if (!found) {
                results.push_back({-1, -1});
            }
        }

        for (const auto& result : results) {
            cout << result.first << " " << result.second << endl;
        }

        if (t > 0) {
            cout << endl; // Separate test cases with empty line
        }
    }

    return 0;
}
