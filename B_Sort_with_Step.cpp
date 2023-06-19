#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;

int t, n, k;
int a[MAXN], p[MAXN];

bool check() {
    for (int i = 1; i <= n; i++) {
        if (a[i] != i) {
            int j = min(n, i + k);
            if (a[j] != i) {
                return false;
            }
            for (int l = i, r = j; l < r; l++, r--) {
                swap(a[l], a[r]);
            }
        }
    }
    return true;
}

bool solve() {
    for (int i = 1; i <= n; i++) {
        p[i] = a[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            swap(p[i], p[j]);
            if (check()) {
                return true;
            }
            swap(p[i], p[j]);
        }
    }
    return false;
}

int main() {
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        if (check()) {
            cout << "0\n";
        } else if (solve()) {
            cout << "1\n";
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}
