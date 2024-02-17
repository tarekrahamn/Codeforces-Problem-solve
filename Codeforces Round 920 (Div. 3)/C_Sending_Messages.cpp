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

#define   int              long long int
#define   ull             unsigned long long 
#define   ld              long double
#define   vi              vector<int32_t>
#define   vll             vector<int>
#define   vc              vector<char>
#define   vs              vector<string>
#define   vb              vector<bool>

//-----------------------------------------------------------------------------------------//
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define   pb              push_back
#define   ppb             pop_back
#define   mp              make_pair
#define   eb              emplace_back
#define   sz              size()
#define   ff              first
#define   ss              second
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   ONLINE_JUDGE
#define   checkmate       return 0;
#define   nl              "\n"

//-----------------------------------------------------------------------------------------------//
#define   mod            1000000007
#define   mod1            998244353
#define   INF             1e18
#define   PI              3.141592653589793238462

//-------------------------------------------------------------------------------------------------//
#define   dbug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define   all(x)          (x).begin(), (x).end()
#define   des(x)          (x).rbegin(), (x).rend()

//----------------------------------------------------------------------------------------------------//
#define   cinv(v)         for(auto &it:v)cin>>it;
#define   fora(i,a,b)     for(int i=a;i<b;i++)
#define   fora2(i,a,b)    for(int i=a;i<=b;i++)
#define   rof(i, a, b)    for (int i=a;i>=b;i--)
#define   rof2(i, a, b)   for (int i=a;i>b;i--)
const int N =  2e5 + 10;
const int X =  1e8;
const int M =  1e5 + 10;
//-----------------------------------------------------------------------------------------------------//
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

//-----------------------------------------------------------------------------------------------------//
template <typename T> // cin >>v[i]
istream &operator>>(istream &istream, vector<T> &v){
    for (auto &it : v)
        cin >> it;
    return istream;
}

template <typename T> // cout << v[i]
ostream &operator<<(ostream &ostream, const vector<T> &c){
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}
template<typename T1, typename T2> // cin >> pair
istream &operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T1, typename T2> // cout << pair
ostream &operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
  
//-------------------------------------------------------------------------------------------------------//
void run(int t) {
     int n, f, a, b;
    cin >> n >> f >> a >> b;

    vector<int> m(n);
    cin >> m;
    int force = 0;
    int need=0;
    int ans = 0;
    fora(i,0,n) {
        //  if (force - a * m[i] <= 0) {
        //         force += b;
        //         ans++;
        //     } else {
        //         force -= a * (m[i + 1] - m[i]);
        //     }
        force = abs((m[i]-need)*a);
        ans=min(b,force);
        f-=ans;
        need=m[i];
    }

    if (f > 0) {
        YES
    } else {
        NO
   }
}


void testcse(){
    int t = 1;
    cin >> t;
    while (t--){
        run(t);
    }
}

//---------------------------------------------------------------------------------------------------------------

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
#endif

    auto start1 = chrono::high_resolution_clock::now(); 
    testcse();
    auto stop1 = chrono::high_resolution_clock::now(); 
    auto duration = chrono::duration_cast<chrono::microseconds>(stop1 - start1); 

    cerr << "Run Time : " << ((double)(clock()) / CLOCKS_PER_SEC); 
    return 0;
}