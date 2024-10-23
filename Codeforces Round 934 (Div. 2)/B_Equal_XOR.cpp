#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> findSubset(vector<int> arr, int k) {
  int n = arr.size();
  vector<int> subset(k);

  // Count the frequency of each element in the array
  vector<int> freq(n + 1, 0);
  for (int i = 0; i < n; i++) {
    freq[arr[i]]++;
  }

  // Select k elements from the first half of the array (arr) such that their XOR sum is maximum
  int idx = 0;
  for (int i = 1; i <= n / 2; i++) {
    // If the element can contribute to the subset (i.e., it appears at least k times), add it k times to the subset
    if (freq[i] >= k) {
      for (int j = 0; j < k; j++) {
        subset[idx++] = i;
      }
      freq[i] -= k;
    }
  }

  return subset;
}

vector<int> findOtherSubset(vector<int> arr, vector<int> subset1, int k) {
  int n = arr.size();
  vector<int> subset2(k);
  int idx = 0;

  // Iterate through the original array and add elements that are not in subset1 to subset2
  // to ensure the XOR sums of both subsets are equal
  for (int num : arr) {
    if (find(subset1.begin(), subset1.end(), num) == subset1.end()) {
      subset2[idx++] = num;
      if (idx == k) {
        break;
      }
    }
  }

  return subset2;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    vector<int> arr(2 * n);
    for (int i = 0; i < 2 * n; i++) {
      cin >> arr[i];
    }

    vector<int> subset1 = findSubset(arr, k);
    vector<int> subset2 = findOtherSubset(arr, subset1, k);

    // Print the subsets
    for (int num : subset1) {
      cout << num << " ";
    }
    cout << endl;

    for (int num : subset2) {
      cout << num << " ";
    }
    cout << endl;
  }

  return 0;
}