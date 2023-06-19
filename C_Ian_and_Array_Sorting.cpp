/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** Author:  tarek200 *************************\\
**************** Created: 09.04.2023 ************************\\
**/
#include <bits/stdc++.h>
using namespace std;
#define     ll                                long long int
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> dp(n);
        for (ll i = 0; i < n; i++) {
            cin >> dp[i];
        }
        bool f = true;
        for(ll i=n-1;i>0;i-=2){
                if(i>=2){
                    dp[i-2] +=(dp[i]-dp[i-1]);
                } 
            else{
                if(dp[i]<dp[i-1]){
                if(i-1==0){
                    f  = false;
                }else{
                    dp[i-2] -=(dp[i-1]-dp[i]);
                }
            }
        }
        }
        if(f){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}

