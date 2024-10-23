#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> coins = {15, 10, 6, 3, 1}; // Vector of coin values in decreasing order

        int numCoins = 0;
        for (int i = 0; i < 5; i++) {
            numCoins += n / coins[i];
            n %= coins[i];
        }

        cout << numCoins << endl;
    }

    return 0;
}
