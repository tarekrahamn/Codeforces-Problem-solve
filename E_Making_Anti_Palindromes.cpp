/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** Author:  tarek200 *************************\\
**************** Created: 20.04.2023 ************************\\
**/
#include <bits/stdc++.h>
#define   Tarek           ios::sync_with_stdio(false);cin.tie(0);
#define   ll              long long int
#define   ull             unsigned long long int
#define   test            int t;cin>>t;while(t--)
#define   push            push_back
#define   pop             pop_back
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   mod             1000000007
#define   loop            for(ll i=0;i<n;i++)
#define   loop2           for(ll i =0;i<n/2;i++)
const int N               = (int) 1e6+5;
const int M               = (int) 1e9+5;
using namespace std;

void solve(){
    ll n;
    cin>>n;
    string str;
    cin>>str;
    vector<ll> dp(26,0);
    vector<ll>dp2(26,0);
    loop2{
        if(str[i] == str[n-i-1]){
            dp[str[i] - 'a']++;
        }
    }
    loop{
       dp2[str[i] - 'a']++;
    }
    ll s = 0,max = 0,max2 = 0;
    for (ll i = 0; i < 26; i++) {
        s += dp[i];
        max = (dp[i] > max) ? dp[i] : max;
    }
    for (ll i = 0; i < 26; i++) {
         max2 = (dp2[i] > max2) ? dp2[i] : max2;
    }
    ll range = s- max;
    if (max2 > n/2 ) {
        cout << "-1\n";
    }
    else if(n%2 == 1){
        cout << "-1\n";
    } 
    else if (max > range) {
        cout << max << "\n";
    } 
    else {
        cout << s/2 + s%2 << "\n";
    }
}
 
int main(){
    Tarek
    test{
       solve();
     }
    return 0;
}
