#pragma GCC optimize("O3,unroll-loops")
#pragma GCC diagnostic ignored "-Wunused-variable" // Ignore unused variable warning
#pragma GCC diagnostic ignored "-Wunknown-pragmas" // Ignore unknown pragmas warning
#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
#define   int              long long int
#define   ull             unsigned long long 
#define   ld              long double
#define   vi              vector<int32_t>
#define   vll             vector<int>
#define   vc              vector<char>
#define   vs              vector<string>
#define   vb              vector<bool>

//-----------------------------------------------------------------------------------------//

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
using namespace std;

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
// When Zeo in First

// template <typename T>
// ostream &operator<<(ostream &os, const vector<T> &v) {
//     bool leadingZeros = true;
//     for (auto &it : v) {
//         if (leadingZeros && it == 0) {
//             continue;  // Skip leading zeros
//         }
//         leadingZeros = false;
//         os << it << " ";
//     }
//     return os;
// }
//-------------------------------------------------------------------------------------------------------//
vector<int> fact(N);
vector<int> inv(N);
int gcd(int a, int b) {
    if (b > a) {
        return gcd(b, a);
    } 
    if (b == 0) {
        return a;
    } 
    return gcd(b, a % b);
}
int binpow(int a, int b) {
    int res = 1; 
    while (b > 0) {
        if (b & 1){
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}
void inti() {
    fact[0] = 1;
    for (int i = 1; i < N; i++){
        fact[i] = (fact[i - 1] % mod * i % mod) % mod;
    }
    for (int i = 0; i < N; i++){
        inv[i] = binpow(fact[i], mod - 2);
    }
}
int nCr(int n, int r){
    return (fact[n] % mod * inv[n - r] % mod * inv[r] % mod) % mod;
}
//------------------------------------------------------------------------------------------------------------//
void run(int t) {
    vector<string> a(3);
    cin  >> a;
    char ans;
    char s;
    for (char l = 'A'; l <= 'C'; l++) {
        int row = 0;
        int col = 0;

        fora(i,0,3) {
            if (a[i][0] == l or a[i][1] == l or a[i][2] == l) {
                row++;
            }
            if (a[0][i] == l or a[1][i] == l or  a[2][i] == l) {
                col++;
            }
        }
        if (row == 2) {
            ans = l;
            break;
        } else if (col == 2) {
            ans = l;
            break;
        }
    }
    cout << ans << nl;
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
