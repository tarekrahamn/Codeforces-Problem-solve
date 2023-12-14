#include <bits/stdc++.h>
#define   int              long long int
#define   ull             unsigned long long int
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
#define   MOD             1000000007
#define   MOD1            998244353
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

//-------------------------------------------------------------------------------------------------------//
void run(int t) {
    int n;
    cin >> n;
    vector<int> a(n);
    cin >> a;
    map<int, int> fre;
    vector<int> store;
    fora(i,0,n) {
        fre[a[i]]++;
    }
    for (const auto& pair : fre) {
        if (pair.ss >= 2) {
            store.pb(pair.ff);
        }
    }
    bool found = false, found2 = false;
    vector<int> b(n);
    if (store.sz < 2) {
        cout << -1 << nl;
    } else {
        fora(i, 0, n) {
            if (a[i] == store[0]) {
                if (!found) {
                    b[i] = 1;
                    found = true;
                } else {
                    b[i] = 2;
            }
        } else if (a[i] == store[1]) {
            if (!found2) {
                b[i] = 1;
                found2 = true;
            } else {
                b[i] = 3;
            }
        } else {
            b[i] = 1;
        }
    }
        cout << b << nl;
    }
}


//---------------------------------------------------------------------------------------------------------------

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input2.txt",  "r",  stdin);
    freopen("output2.txt", "w", stdout);
#endif
    clock_t z = clock();
    int t = 1;
    cin >> t;
    while (t--){
        run(t);
    }
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
