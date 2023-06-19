#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] > a[j]) {
                    swap(a[i], a[j]);
                }
                for (int k = j + 1; k < n; k++) {
                    if (a[j] > a[k]) {
                        swap(a[j], a[k]);
                    }
                    if (a[i] > a[j]) {
                        swap(a[i], a[j]);
                    }
                    if (a[j] % a[i] == 0 && a[k] % a[j] == 0) {
                        int b1 = a[j] / a[i];
                        int b2 = a[k] / a[j];
                        if (b1 != b2) {
                            count++;
                        }
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
