#include <iostream>
#include <vector>

using namespace std;

pair<int, int> findSwapIndices(vector<int>& p) {
    int n = p.size();
    int i = -1, j = -1;

    // Find the first pair of adjacent elements that are not in increasing order
    for (int k = 0; k < n - 1; k++) {
        if (p[k] > p[k+1]) {
            i = k;
            j = k+1;
            break;
        }
    }

    // Check if valid indices exist for swapping
    if (i != -1 && j != -1) {
        // Check if valid indices exist for creating new non-permutation subarrays
        if ((i > 0 && p[i-1] < p[j]) || (j < n-1 && p[i] > p[j+1])) {
            return make_pair(i+1, j+1);
        }
    }

    // If valid indices are not found, swap any two adjacent elements
    return make_pair(1, 2);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        pair<int, int> swapIndices = findSwapIndices(p);
        cout << swapIndices.first << " " << swapIndices.second << endl;
    }

    return 0;
}
