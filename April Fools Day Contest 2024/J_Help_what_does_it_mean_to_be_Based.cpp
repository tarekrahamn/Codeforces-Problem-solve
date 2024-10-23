#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int x;
    cin >> x;
    
    if (x == 1) {
        int a, b;
        cin >> a >> b;
        cout << a + b << endl;
    } else if (x == 2) {
        int a;
        cin >> a;
        cout << abs(a) << endl;
    } else if (x == 3) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int m = a[0];
        for (int i = 1; i < n; ++i) {
            m = max(m, a[i]);
        }
        cout << m << endl;
    } else if (x == 4) {
        int n, k;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cin >> k;
        sort(a.begin(), a.end(), greater<int>());
        cout << a[k - 1] << endl;
    }
    return 0;
}
