/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** Author:  tarek200 *************************\\
**************** Created: 08.05.2023 ************************\\
**/
#include <bits/stdc++.h>
#define   Tarek           ios::sync_with_stdio(false);cin.tie(0);
#define   ll              long long int
#define   ull             unsigned long long int
#define   ld              long double
#define   test            ll t;cin >> t;while(t--)
#define   push            push_back
#define   pop             pop_back
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   exit            return ;
#define   next            continue;
#define   B               break;
#define   nl              "\n"
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   mod             1000000007
#define   PI              3.14159265358979323846
#define   srt(dp)         sort(dp.begin(), dp.end());
#define   FOREACH(it, l)  for (auto it = l.begin(); it != l.end(); it++)
#define   FOR(n)          for(ll i=1;i<=n;i++)
#define   LOOP1(len)        for( i=0;i<m*n;i++)
const int N               = (int) 1e6+5;
const int M               = (int) 1e9+5;
using namespace std;
void run(){
     ll x,y;
     cin >> x >>y;
     ll len =x*y;
     vector<ll>dp(len);
     for(ll i =0;i<len;i++){
         cin >> dp[i];
     }
     srt(dp)
     if (y > x) {
        ll temp = x;
        x = y;
        y = temp;
    }
    ll solve = (dp[len - 1] - dp[0]) * (x - 1) * y;
    solve += (dp[len - 1] - dp[1] > dp[x * y - 2] - dp[0] ? dp[len - 1] - dp[1] : dp[x * y - 2] - dp[0]) * (y-1);
    cout << solve<< nl;
 }
int main(){
    Tarek
    test{
        run();
    }
    return 0;
}
/*
u put max in left top corner
then if n > m
u put min below it
and 2nd min beside it

else u swap min and 2nd min

and try swapping max and 2nd min with 2nd max and min

and output max among those
*/