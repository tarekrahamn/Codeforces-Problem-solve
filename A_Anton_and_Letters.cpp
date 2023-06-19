#include<iostream>
#include<algorithm>
 
using namespace std;
 
void solve(){
    int n, k; cin >> n >> k;
    long long int a[n];
    int i;
 
    for(i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    long long int ans = 0;
    
 
    while(k > 0){
        long long int minSum = 0, maxSum = 0;
 
        for(i = 2; i < n; i++){
            minSum += a[i];
            cout << "sum 1 " << minSum << endl;
        }
        for(i = 0; i < n - 1; i++){
            maxSum += a[i];
            cout << "sum 2 " << maxSum << endl;
        }
        if(minSum > maxSum){
            // I will delete a[0] and a[1]
            int i = 0;
            for(int d = 2; d < n; d++){
                a[i] = a[d];
                i++;
            }
            n -= 2;
            ans = minSum;
            cout << "sum 3 " << ans << endl;
        }
        else if(maxSum > minSum){
            // I will delete a[n - 1]
            n--;
            ans = maxSum;
            cout << "sum 4" << ans << endl;

        }
        else if(minSum == maxSum) ans = maxSum;
        k--;
    }
 
    cout << ans << endl;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}