/*
               Starting with the name of almighty ALLAH 
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**
            In the name of Allah, Most Gracious, Most Merciful             
                    লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ 
                        Author:  tarek200 
                        Created: 07.07.2023 
                    United International University
                Practice is the only shortcut to improve  
*/
#include <bits/stdc++.h>
#include<vector>
#include<set>
#define   Tarek           ios::sync_with_stdio(false);cin.tie(0);
#define   ll              long long int
#define   ull             unsigned long long int
#define   ld              long double
#define   vi              vector<int>
#define   vll             vector<ll>
#define   vc              vector<char>
#define   vs              vector<string>
#define   test            ll t;cin >> t;while(t--)
#define   pb              push_back
#define   pp              pop_back
#define   sz              size()
#define   ff              first
#define   ss              second
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   exit            return ;
#define   next            continue;
#define   checkmate       return 0;
#define   nl              "\n"
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   mod             1000000007
#define   all(x)          (x).begin(), (x).end()
#define   des(x)          (x).rbegin(), (x).rend()
#define   FOREACH(it, l)  for (auto it = l.begin(); it != l.end(); it++)
#define   cinv(v)         for(auto &it:v)cin>>it;
#define   FOR(i,a,b)      for(ll i=a;i<b;i++)
#define   LOOP(i,a,b)     for(ll j=a;j<b;j++)
#define   LOOP2(i,a,b)    for(ll i=a;i<=b;i++)
#define   ROF(i, a, b)    for (ll i = a; i >=b; i--)
const long long int N     = (ll) 1e7+1;
const long long int M     = (ll) 1e9+5;
#define MAX                 200005
#define MOD                 1000003
#define eps                 1e-9
#define INF                 0x3f3f3f3f3f3f3f3f // 4,557,430,888,798,830,399
#define inf                 0x3f3f3f3f // 1,061,109,567
using namespace std;
void run(){
    ll x1, y1;
    ll x2, y2;
    ll x3, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    ll Bob1 = max(min(x1, x2), min(x1, x3));
    ll Carol = min(max(x1, x2), max(x1, x3));
    ll Bob2 = max(min(y1, y2), min(y1, y3));
    ll Carol2 = min(max(y1, y2), max(y1, y3));
    ll ans =Carol - Bob1 + Carol2 - Bob2;
    cout << ans + 1 << nl;
}
int main(){
    Tarek
    test{
        run();
    }
    checkmate
}
