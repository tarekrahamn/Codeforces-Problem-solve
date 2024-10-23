#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;
void run() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n), b(m);
    map<int, int> a1, b1; 
    int A = k / 2;
    int B = k / 2;
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a1[a[i] - 1]++;
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        b1[b[i] - 1]++;
    }
    for (int i = 0; i < k; i++) {
        if (!a1[i] && b1[i] && B) {
            B--;
        } else if (a1[i] && !b1[i] && A) {
            A--;
        } else if (a1[i] && b1[i]) {
            count++;
        }
    }
    if (A + B - count == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        run();
    }

    return 0;
}