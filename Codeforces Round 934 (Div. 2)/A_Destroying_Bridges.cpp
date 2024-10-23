#include <iostream>

using namespace std;

int minReachableIslands(int n, int k) {
  // Dominator can destroy at most k bridges, so Everule can be isolated on his island at worst.
  // In the best case, no bridges are destroyed, and Everule can visit all islands.
  return max(1, n - k);
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    int reachableIslands = minReachableIslands(n, k);
    cout << reachableIslands << endl;
  }

  return 0;
}