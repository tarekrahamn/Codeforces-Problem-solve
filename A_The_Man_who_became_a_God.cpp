/*
               Starting with the name of almighty ALLAH 
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**
            In the name of Allah, Most Gracious, Most Merciful             
                   লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ 
                        Author:  tarek200 
                        Created: 06.07.2023 
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
#define   B               break;
#define   checkmate       return 0;
#define   nl              "\n"
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   mod             1000000007
#define   all(x)         (x).begin(), (x).end()
#define   des(x)         (x).rbegin(), (x).rend()
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
#define PI                  acos(-1.0)  // 3.1415926535897932
using namespace std;
void run(){
    ll n,l;
    cin >> n>>l;
    vll a(n);
    cinv(a);
    vll b(n-1);
    FOR(i,0,n-1){
        b[i]=abs(a[i]-a[i+1]);
    }
    sort(all(b));
    ll sum=0;
    FOR(i,0,n-l){
        sum+=b[i];
    }
    cout << sum << nl;
}
int main(){
    Tarek
    test{
        run();
    }
    checkmate
}
// FOR(i,0,n) {
    //     cur &= a[i];
    //     if (cur == 0) {
    //         count++;
    //         cur = mx;
    //     }
    // }
    ll count= 0;
    int  current = mx;
    for (int i = 0; i < n; i++) {
        current &= a[i];
        count += ( current == 0);
        current = (current == 0) ? mx :  current;
    }
    count += (mn > 0) ? 1 : 0;
    cout << count << endl;
     // if(mn!=0){
    //     cout << 1 << nl;
    //     exit
    // }