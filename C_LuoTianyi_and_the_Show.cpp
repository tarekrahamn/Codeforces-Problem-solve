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
#define   sz              size()
#define   ff              first
#define   ss              second
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
#define   FOR(x)          for(ll i=0;i<x;i++)
#define   LOOP1(m)        for( i=0;i<m;i++)
const int N               = (int) 1e6+5;
const int M               = (int) 1e9+5;
using namespace std;
int main(){
    Tarek
    test{
        ll x,y,m;
        cin  >> x >> y;
        ll r = 0, l =0;
        ll c = 0;
        vector<ll>dp;
        set<ll>mp;
        dp.push(-1);
        FOR(x){
            cin >> m;
            if(m==-2){
                l++;
            }
            else if(m==-1){
                r++;
            }else{
                c++;
                mp.insert(m);
            }
            //  mp.insert(m);
        }
        for(auto it : mp){
            dp.push(it);
            //dp.push(-2);

        }
         dp.push(-2);
        ll solve = 0;
        FOR(dp.size()){
            m=dp[i];
            ll mm=min(r+dp.size()-2,y);
            ll mm2=min(l+dp.size()-2,y);
            ll mm3=min(r+i-1,m-1)+min(l+(dp.size()-i-2),y-m);
            if(i==0){
                solve = max(solve,mm2);
            }
            else if(i==dp.size()-1){
                solve = max(solve,mm);
            }
            else{
                solve = max(solve,1+mm3);
            }
        }
        cout << solve <<nl;
    }
    return 0;
}