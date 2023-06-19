 #include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.length();
        vector<int> values = {1, 10, 100, 1000, 10000};

        vector<int> rightMost(n);
        rightMost[n - 1] = values[s[n - 1] - 'A'];

        // Calculate the right-most element for each letter
        for (int i = n - 2; i >= 0; i--) {
            rightMost[i] = max(values[s[i] - 'A'], rightMost[i + 1]);
        }

        int maxVal = 0;
        int leftSum = 0;

        // Calculate the maximum value by trying to change each digit to A, B, ..., E
        for (int i = 0; i < n; i++) {
            maxVal = max(maxVal, leftSum + rightMost[i] - values[s[i] - 'A']);
            leftSum += values[s[i] - 'A'];
        }

        cout << maxVal << endl;
    }

    return 0;
}
