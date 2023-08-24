#include <bits/stdc++.h>
using namespace std;
int binarySearch(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < target){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return left;
}

void run() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0;
    vector<int> b, c;
    c.push_back(a[0]);
    for (int i = 1; i < n; i++) {
        int l=lower_bound(b.begin(),b.end(),b[i])-b.begin();
        int p=upper_bound(b.begin(),b.end(),b[i])-b.begin();

        if (l == 0 and p != 0) {
            b.push_back(a[i]);
            ans++;
        }
        c.push_back(a[i]);
    }
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--){
      run();
    }
    return 0;
}