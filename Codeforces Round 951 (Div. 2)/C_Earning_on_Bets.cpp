#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> k(n);
        bool impossible = false;
        for (int &ki : k) {
            cin >> ki;
            if (ki == 2) impossible = true;
        }

        if (impossible) {
            cout << -1 << endl;
            continue;
        }

        long long P = 1;
        for (int ki : k) P *= ki;

        long long sum = 0;
        vector<long long> bets(n);
        for (int i = 0; i < n; ++i) {
            bets[i] = P / k[i];
            sum += bets[i];
        }

        if (sum < P) {
            for (long long bet : bets) cout << bet << " ";
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
