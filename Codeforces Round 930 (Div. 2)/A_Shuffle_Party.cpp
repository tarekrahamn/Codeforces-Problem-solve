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
void Broken_Heart(int t){
    int  n,k,m;
    cin >> n;
   // vector<int> a(n);
     if (n == 1) {
        cout << 1 << nl;
    } else {
        int shift = 1;
        while (shift <= n) {
            shift <<= 1; 
            dbug(shift,n);
        }
        //dbug(shift);
        cout << (shift >> 1) << nl;
        dbug(shift); 
    }
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