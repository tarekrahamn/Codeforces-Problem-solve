/*
 
               Starting with the name of almighty ALLAH 
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**
            In the name of Allah, Most Gracious, Most Merciful             
                   লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ 
                        Author:  tarek200 
                        Created: 19.06.2023 
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
#define   PI              3.14159265358979323846
#define   all(x)         (x).begin(), (x).end()
#define   des(x)         (x).rbegin(), (x).rend()
#define   FOREACH(it, l)  for (auto it = l.begin(); it != l.end(); it++)
#define   cinv(v)         for(auto &it:v)cin>>it;
#define   FOR(i,a,b)      for(ll i=a;i<b;i++)
#define   LOOP(i,a,b)     for(ll j=a;j<b;j++)
#define   LOOP2(i,a,b)    for(ll i=a;i<=b;i++)
#define   ROF(i, a, b)    for (ll i = a; i >b; i--)
const long long int N     = (ll) 1e7+1;
const long long int M     = (ll) 1e9+5;
using namespace std;
void run(){
    ll n ,k;
    cin >> n >> k;
    ll diff= abs(n-k);
    ll step=0;
    if(n>k){
        ll x = n/2;
        ll y=(x-0)-(diff-x);
        step=abs(y);

    }
    else if (n<k){
        step=diff;
    }else{
        step = (diff+1)/2;
    }
    cout  << step << nl;
}
int main(){
    Tarek
    test{
        run();
    }
    checkmate
}