/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** Author:  tarek200 *************************\\
**************** Created: 06.05.2023 ************************\\
**/
#include <bits/stdc++.h>
#define   Tarek           ios::sync_with_stdio(false);cin.tie(0);
#define   ll              long long int
#define   ull             unsigned long long int
#define   ld              long double
#define   test            int t;cin >> t;while(t--)
#define   push            push_back
#define   pop             pop_back
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   si(x)           scanf("%lld",&x);
#define   si2(x,y)           scanf("%lld%lld",&x,&y);
#define   exit            return ;
#define   next            continue;
#define   B               break;
#define   nl              "\n"
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   mod             1000000007
#define   PI              3.14159265358979323846
#define   srt(dp)         sort(dp.begin(), dp.end());
#define   FOREACH(it, l)    for (auto it = l.begin(); it != l.end(); it++)
#define   FOR(n)          for(ll i=1;i<=n;i++)
#define   LOOP1(n)        for(ll i=0;i<m;i++)
#define   LOOP2(n)        for(ll i=0;i<n/2;i++)
#define   LOOP3(n)        for(ll i=n;i>=0;i--)
const int N               = (int) 1e6+5;
const int M               = (int) 1e9+5;
using namespace std;

void run(){
    ll n;
    cin >> n;
    vector<int>dp(n);
    LOOP1(n){
        cin >> dp[i];
    }
    ll max_len = 0;
    ll cur_len = 0;
    LOOP1(n){
        if (dp[i] == 0) 
            cur_len++;
        else {
            max_len = max(max_len, cur_len);
            cur_len = 0;
        }
    }
    max_len = max(max_len, cur_len);
    cout << max_len << endl;
}
int main(){
    Tarek
    test{
        // cout << "Case #" << t << ": ";
        run();
    }
    return 0;
}
// map<ll,ll>mp;
// void run(ll x){
//     if(!x){
//         exit
//     }
//     mp[x]|=1;
//     if((2*x)%3){
//         exit
//     }
//     ll ans = (2*x)/3;
//     run(ans);
//     run(ans/2);
// }
// void solve (){
//     ll n,m;
//     cin >> n >> m ;
//     mp.clear();
//     run(n);
//     cout << (vector<string>{"NO","YES"}[mp[m]]) << nl;
// }
// int main(){
//     Tarek
//     test{
//         // cout << "Case #" << t << ": ";
//     solve();
//     }
//     return 0;
// }
// bool dfs(ll x, ll m, unordered_map<ll, bool>& vis) {
//     if (vis[x]) {
//         return false;
//     }
//     vis[x] = true;
//     if (x == m) {
//         return true;
//     }
//     if ((2 * x) % 3 == 0) {
//         ll ans = (2 * x) / 3;
//         return dfs(ans, m, vis) || dfs(ans / 2, m, vis);
//     }
//     return false;
// }

// void solve() {
//     ll n, m;
//     cin >> n >> m;
//     unordered_map<ll, bool> vis;
//     bool ans = dfs(n, m, vis);
//     cout << (ans ? "YES" : "NO") << nl;
// }

// int main() {
//     Tarek
//     test{
//         solve();
//     }
//     return 0;
//}