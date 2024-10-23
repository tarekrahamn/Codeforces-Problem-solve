#pragma GCC optimize("O3,unroll-loops")
#pragma GCC diagnostic ignored "-Wunused-variable" // Ignore unused variable warning
#pragma GCC diagnostic ignored "-Wunknown-pragmas" // Ignore unknown pragmas warning
#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimize("unroll-loops")
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#include <functional> // for less  
#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;
#define ll long long int 
#define sz size()
#define YES cout<<"YES"<<endl;
#define NO  cout<<"NO"<<endl;
#define ONLINE_JUDGE
#define checkmate return;
#define nl              "\n"
#define dbug(...)  __f (#__VA_ARGS__, __VA_ARGS__)
#define all(x) (x).begin(), (x).end()
#define des(x) (x).rbegin(), (x).rend()
#define fora(i,a,b)    for(int i=a;i<b;i++)
#define fora2(i,a,b)   for(int i=a;i<=b;i++)
#define rof(i, a, b)   for (int i=a;i>=b;i--)
#define rof2(i, a, b)  for (int i=a;i>b;i--)
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

template <typename T> // cin >>v[i]
istream &operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}

template <typename T> // cout << v[i]
ostream &operator<<(ostream &ostream, const vector<T> &c){for (auto &it : c) cout << it << " "; return ostream;}

template<typename T1, typename T2> // cin >> pair
istream &operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }

template<typename T1, typename T2> // cout << pair
ostream &operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }


int helper(vector<int>& coins, vector<int>& dp, int amount, int start) {
    if (amount == 0)
        return 0;
    
    if (dp[amount] != INT_MAX)
        return dp[amount];
    
    for (int i = start; i < coins.size(); ++i) {
        if (coins[i] <= amount) {
            int coinToTakeAtThatAmount = helper(coins, dp, amount - coins[i], i) + 1;
            dp[amount] = min(dp[amount], coinToTakeAtThatAmount);
        }          
    }
    
    return dp[amount];
}

int coinChange(vector<int>& coins, int amount) {
    if (amount == 0)
        return 0;
    
    vector<int> dp(amount + 1, INT_MAX);
    int start = 0;
    int res = helper(coins, dp, amount, start);
    if (res == INT_MAX)
        return -1;
    return res;
}

void Broken_Heart(int t)
{
    int a[] = {1, 3, 6, 10, 15};
    int n = sizeof(a) / sizeof(a[0]);
    int x;
    cin >> x;
    int ans =x / 15;
    if (ans >= 1){
        ans--;
        x = (x % 15) + 15;
    }
    vector<int> coinsVec(a, a + n);
    vector<int> dp(x + 1, INT_MAX);
    ans += helper(coinsVec, dp, x, 0);
    cout << ans << nl;
}
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
#endif
    int t=1;
    cin >>t ; 
    while(t--){
        Broken_Heart(t);
    }
    return 0;
}