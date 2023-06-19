/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** Author:  tarek200 *************************\\
**************** Created: 05.05.2023 ************************\\
**/
#include <bits/stdc++.h>
#define   Tarek           ios::sync_with_stdio(false);cin.tie(0);
#define   ll              long long int
#define   ull             unsigned long long int
#define   ld             long double
#define   test            int t;cin>>t;while(t--)
#define   push            push_back
#define   pop             pop_back
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   exit            return ;
#define   next            continue;
#define   nl              "\n"
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   mod             1000000007
#define   PI              3.14159265358979323846
#define   srt(dp)         sort(dp.begin(), dp.end());
#define   FOR(n)          for(ll i=1;i<n/2;i++)
#define   LOOP1(n)        for(ll i=0;i<n;i++)
const int N               = (int) 1e6+5;
const int M               = (int) 1e9+5;
using namespace std;
// PRIME NUMBER TEST//
bool prime(int n){
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3; i*i<=n; i+=2){
        if(n%i==0)return false;
    }
    return true;
}
/*
    int n;
    cin>>n;
    vector<ll>dp(n);
    LOOP1(n) cin>>dp[i];
*/
void run(){
    ll n;
    cin>>n;
    vector<ll>dp(n);
    LOOP1(n){
        cin>>dp[i];
    }
    ll lu = abs(dp[n-1]-dp[0]);
    FOR(n){
        ll j = n - i;
        lu=__gcd(lu,abs(dp[j-1]-dp[i]));
    }
    cout << lu << nl;

}
int main(){
    Tarek
    test{
        run();
    }
}




