#include <bits/stdc++.h>
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
void morethanNbyK(int t) {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x = n / k;

    // unordered_map initialization
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Traversing the map
    for (auto i : freq) {

        // Checking if value of a key-value pair
        // is greater than x (where x=n/k)
        if (i.second > x) {

            // Print the key of whose value
            // is greater than x
            cout << i.first << endl;
        }
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
        morethanNbyK(t);
    }
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
