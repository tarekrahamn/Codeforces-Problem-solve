/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** Author:  tarek200 *************************\\
**************** Created: 02.04.2023 ************************\\
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define pb push_back
const int N = (int)1e6 + 5;
const int M = (int)1e9 + 5;
const int MOD = (int)1000000007;
const int max_prime = (int)1e6 + 3;
const int BLK = (int)700;
void run() {
    int n;
    cin >> n;
    string a;
    cin >> a;
    int ans = n - 1;
    int cnt = 1;
    for (int i = 2; i < n; i++) {
        if (a[i - 2] == a[i]){
            ans--;
        }
    }
    cout << ans << "\n";
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        run ();
    }
    return 0;
}