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
// Prime in true false
bool prime(int a)
{
    if (a == 1 || a == 0)
        return false;
    for (int i=2; i*i <= a; i++)
        if (a % i == 0)
            return false;
    return true;
}
//-------------------------------------------------------------------------------------------------------//
//the proble is say we need to find the maximum value we can get by chossing one element 
//and the xooring it with every other element in aarray.
//so we can able to find out the position of 0,then we can find all other elements 
//using given operation a_i=b_i^b[i+1];
//then we iterrate over the all possible position of 0 and we find this position 
//then we need to bulid another walid array B

void run(int t) {
    int n,k,m;
    cin >> n;
    vector<int> a(n);
    vector<int>b(n,0);
    cin >> a;
    // now find this a_i=b_i^b[i+1];
    fora(i,1,n){
        b[i]=b[i-1]^a[i-1];
    }
    // now we need to find all possible positon so we can do this using bitwise or
    fora(i,0,31){ // most significant bit
        int cant=0;
        for(int x : b){
            cant+=(x>>i)&1;
            //cant counts the number of bits set on 1 in the i-th bit position
            //in the element of vector B
        }
        int cant2=0;
        int mask = 1 << i;
        fora(j,0,n){
            cant2+=(j & mask) >>i;
            // cant2 counts the number of bits set on 1 in the i-th bit position 1 to n-1
        }
        if(cant != cant2){
            b[0] |=(1<<i);
        }
        // this condition chacek where the count is differ for this bit position 
        //if the cant and cant2 are not eqal it's set most significant bit(MSB) of 
        // the first element of vector b to 1
    }
    // now , at first we say we if we find the all possible position of then we 
    //find all other valid element for making B
    fora(i,1,n){
        b[i]^=b[0];
    }
    cout << b << nl;
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
    //cin >> t;
    while (t--){
        run(t);
    }
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
