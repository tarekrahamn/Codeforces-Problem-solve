/*
Starting with the name of almighty ALLAH 
Author:  Tarek Rahman
Created: 03.08.2023 
United International University 
*/

#include <bits/stdc++.h>
#define   Tarek           ios::sync_with_stdio(false);cin.tie(0);
#define   ll              long long int
#define   ull             unsigned long long int
#define   ld              long double
#define   vi              vector<int>
#define   vll             vector<ll>
#define   vc              vector<char>
#define   vs              vector<string>
#define   vb              vector<bool>
#define   test            ll t;cin >> t;while(t--)


#define   pb              push_back
#define   ppb             pop_back
#define   mp              make_pair
#define   eb              emplace_back
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
#define   MOD             1000000007
#define   MOD1            998244353
#define   INF             1e18
#define   PI              3.141592653589793238462


#define   all(x)          (x).begin(), (x).end()
#define   des(x)          (x).rbegin(), (x).rend()
#define   FOREACH(it, l)  for (auto it = l.begin(); it != l.end(); it++)
#define   cinv(v)         for(auto &it:v)cin>>it;
#define   FOR(i,a,b)      for(ll i=a;i<b;i++)
#define   LOOP(i,a,b)     for(ll j=a;j<b;j++)
#define   LOOP2(i,a,b)    for(ll i=a;i<=b;i++)
#define   ROF(i, a, b)    for (ll i = a; i >=b; i--)
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

//Exponent function 
ll expo(ll a, ll b, ll mod){
    ll res = 1;
    while (b>0){
        if(b & 1){
            res = (res *a) % mod;
        }
        a = (a*a) % mod;
        b = b >> 1;
    }
    return res;
}
void run(){
     ll n;
    cin>>n;
    vll a(n);
    FOR(i,0,n){
        cin>>a[i];
    }
    ll mx=a[0];
    ll res=0;
    FOR(i,1,n){
        if(a[i]<a[i-1]){
            res=max(mx,res);
        }
        mx=max(mx,a[i]);
    }
    cout<<res<< nl;
}

int main(){
    Tarek
    test{
        run();
    }
    checkmate
}
void solve()
{
    int n,i,k,ans=0,j,sum=0;
    cin >> n >> k;
    int arr[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> arr[i];
        ans = max(ans , arr[i]);
    }
    for(i=1; i<n; i++)
    {
        int start = 0,end = 1e9,mid,res=0;
        while(start <= end)
        {
            mid = (start + end) / 2;
            sum = arr[i] + mid;
            int lagbe = 0,ok = 0;
            for(j=i; j<=n; j++)
            {
                if(sum <= arr[j])
                {
                    ok = 1;
                    break;
                }
                lagbe += (sum - arr[j]);
                sum--;
            }
            if(lagbe <= k && ok)
            {
                res = mid;
                start = mid + 1;
            }
            else 
            {
                end = mid - 1;
            }
        }
        ans = max(ans , res + arr[i]);
    }
    cout << ans << endl;
}