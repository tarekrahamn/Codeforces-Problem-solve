#include <bits/stdc++.h>
#define   ll              long long int
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
template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v){
    for (auto &it : v)
        cin >> it;
    return istream;
}

template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c){
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}

//-----------------------------------------------------------------------------------------------------//
// Mathematical functions
int gcd(int a, int b){
    while (b){
        a %= b;
        swap(a, b);
    }
    return a;
}

int gcdX(int a, int b, int &x, int &y) // gcd extended
{
    x = 1, y = 0;
    int x1 = 0, y1 = 1, a1 = a, b1 = b;
    while (b1){
        int q = a1 / b1;
        tie(x, x1) = make_tuple(x1, x - q * x1);
        tie(y, y1) = make_tuple(y1, y - q * y1);
        tie(a1, b1) = make_tuple(b1, a1 - q * b1);
    }
    return a1;
}
int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}
// modular exponentiation
int modpow(int x, int n, int m = MOD){
    if (x == 0 && n == 0){
        return 0; // undefined case
    }
    int res = 1;
    while (n){
        if (n & 1){
            res = ((res % m) * (x % m)) % m;
        }
        x = ((x % m) * (x % m)) % m;
        n >>= 1;
    }
    return res;
}
int modinv(int x, int m = MOD){
    return modpow(x, m - 2, m);
}

                       //--------------- Seive -----------------------

// Get All The Divisors Of That Number
vector<int> getdiv(int n){
    vector<int> ans;
    for (int i = 1; i * i <= n; i++){
        if (n % i == 0){
            ans.pb(i);
            if (n / i != i){
                ans.pb(n / i);
            }
        }
    }
    return ans;
}
// to get the prime factors of that number
vector<int> getprimefac(int n){
    vector<int> ans;
    int nn = n;
    for (int i = 2; i * i <= n; i++){
        if (nn % i == 0){
            ans.pb(i);
            while (nn % i == 0){
                nn /= i;
            }
        }
    }
    if (nn > 1){
        ans.pb(nn);
    }
    return ans;
}
// get instant prime
vector<int> sieve(int n){
    int *a = new int[n + 1]();
    vector<int> vect;
    for (int i = 2; i <= n; i++){
        if (a[i] == 0){
            vect.push_back(i);
            for (int j = i * i; j <= n; j += i){
                a[j] = 1;
            }
        }
    }
    return vect;
}
// to invert a binary string
void invert(string &s){
    int n = s.sz;
    for (int i = 0; i < n; i++){
        s[i] ^= '0' ^ '1';
    }
}
//-------------------------------------------------------------------------------------------------------//
void run(int t) {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), c(m), b;
    fora(i, 0, n) {
        cin >> a[i];
    }
    fora(i, 0, m) {
        cin >> c[i];
        //if (b.empty() or b.back() > c[i]) {
            b.pb(c[i]);
        //}
    }
    for (int &i : a) {
        for (int &j : b) {
            if (i % (1 << j) == 0) {
                i |= 1 << (j - 1);
            }
        }
    }
    cout << a << nl;
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