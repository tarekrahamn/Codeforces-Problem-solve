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
int sumOfDigitsFrom1ToNUtil(int n, int a[]) 
{ 
    if (n < 10) 
        return (n * (n + 1) / 2); 
     
    int d = (int)(log10(n)); 
    int p = (int)(ceil(pow(10, d))); 
    int msd = n / p; 
     
    return (msd * a[d] + (msd * (msd - 1) / 2) * p + 
            msd * (1 + n % p) + 
            sumOfDigitsFrom1ToNUtil(n % p, a)); 
} 
 
int sumOfDigitsFrom1ToN(int n) 
{ 
    int d = (int)(log10(n)); 
    int a[d + 1]; 
    a[0] = 0; a[1] = 45;
     
    for(int i = 2; i <= d; i++) 
        a[i] = a[i - 1] * 10 + 45 * 
               (int)(ceil(pow(10, i - 1))); 
 
    return sumOfDigitsFrom1ToNUtil(n, a); 
}
 
void solve(int t)
{
    int n; cin >> n;
    cout<<sumOfDigitsFrom1ToN(n)<<'\n';
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
    auto start1 = chrono::high_resolution_clock::now(); 
    while(t--){
        solve(t);
    }
    auto stop1 = chrono::high_resolution_clock::now(); 
    auto duration = chrono::duration_cast<chrono::microseconds>(stop1 - start1); 

    cerr << "Run Time : " << ((double)(clock()) / CLOCKS_PER_SEC); 
    return 0;
}