#include <iostream>
#include <vector>

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

        long long sumBeauty = 0;

        for (int i = 0; i < n; i++) {
            int minElement = a[i], maxElement = a[i];

            for (int j = i; j < n; j++) {
                minElement = min(minElement, a[j]);
                maxElement = max(maxElement, a[j]);

                sumBeauty += maxElement - minElement;
            }
        }

        cout << sumBeauty << endl;
    }

    return 0;
}
