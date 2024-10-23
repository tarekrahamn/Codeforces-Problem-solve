#include <iostream>
using namespace std;

int main() {
  int t; // number of test cases
  cin >> t;
  while (t--) {
    int n; // number of containers
    cin >> n;
    long long sum = 0; // sum of water in all containers
    for (int i = 0; i < n; i++) {
      int a; // amount of water in i-th container
      cin >> a;
      sum += a;
    }
    if (sum % n != 0) { // average is not an integer
      cout << "NO\n";
      continue;
    }
    long long x = sum / n; // average amount of water
    long long excess = 0; // excess or deficit of water
    bool possible = true; // flag to check if distribution is possible
    for (int i = 0; i < n; i++) {
      int a; // amount of water in i-th container
      cin >> a;
      excess += a - x; // update excess or deficit
      if (excess < 0) { // negative excess means distribution is impossible
        possible = false;
        break;
      }
    }
    if (possible) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
