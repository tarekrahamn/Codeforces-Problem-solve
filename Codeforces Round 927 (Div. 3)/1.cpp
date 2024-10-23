#include <bits/stdc++.h>
using namespace std;

int main() {
  // Read the number of test cases
  int t;
  cin >> t;

  // For each test case
  while (t--) {
    // Read the length of the array, the value of m, and the array elements
    int n, m;
    string s;
    cin >> n >> m >> s;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long product = 1; // Initialize product to 1
    for(int i =0;i<n;i++) {
        // Output the remainder of the product of all elements of the array a when divided by m
        cout << (product % m) << endl;

        // Update product
        if ( s[i]== 'L') {
            product = (product / a.front()) * (a.front() != 1 ? a.front() - 1 : 1);
            a.erase(a.begin()); // Remove the leftmost element
        } else if (s[i] == 'R') {
            product = (product / a.back()) * (a.back() != 1 ? a.back() - 1 : 1);
            a.pop_back(); // Remove the rightmost element
        }
    }
  }

  return 0;
}
