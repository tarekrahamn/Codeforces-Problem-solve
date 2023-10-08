/*Starting with the name of almighty ALLAH
Author:  Tarek Rahman
Created: 30.09.2023
United International University
*/
#include <bits/stdc++.h>
#define   int             long long int
#define   ull             unsigned long long int
#define   ld              long double
#define   vi              vector<int32_t>
#define   vll             vector<int>
#define   vc              vector<char>
#define   vs              vector<string>
#define   vb              vector<bool>
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
#define   MOD             1000000007
#define   MOD1            998244353
#define   INF             1e18
#define   PI              3.141592653589793238462
#define   dbug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define   all(x)          (x).begin(), (x).end()
#define   des(x)          (x).rbegin(), (x).rend()
#define   FOREACH(it, l)  for (auto it = l.begin(); it != l.end(); it++)
#define   cinv(v)         for(auto &it:v)cin>>it;
#define   print1(a)       for(auto x : a) cout << x.ff << " " << x.ss << endl
#define   fo(i,a,b)      for(int i=a;i<b;i++)
#define   fora(i,a,b)     for(int j=a;j<b;j++)
#define   fora2(i,a,b)    for(int i=a;i<=b;i++)
#define   rof(i, a, b)    for (int i = a; i >=b; i--)
const int N = (int) 1e5 + 10;
const int X = (int) 1e8;
#include <bits/stdc++.h>
using namespace std;
// GCD Tested
int gcd(int a,int b){
    if(b==0 || a==0){
        return max(a,b);
    }
    return gcd(b,a%b);
}
// LCM Tested
int lcm(int a, int b) {
     return (a / gcd(a, b)) * b; 
}
// Another Prime tested
bool prime1(int n){
	for(int i = 2; i <= sqrt(n) ; i++){
        if(n % i == 0){
            return false;
        }
        return true;
    }
}
// String Prime tested
bool prime(char a, char b){
	string s = "";
    s += a ;
    s += b;
	int x = stoi(s); 
    return prime1(x); 
}
//Exponent function 
int expo(int a, int b, int mod){
    int res = 1;
    while (b>0){
        if(b & 1){
            res = (res *a) % mod;
        }
        a = (a*a) % mod;
        b = b >> 1;
    }
    return res;
}
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
void run(int t) {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    int minn[2] = {INT_MAX, INT_MAX};
    int maxx[2] = {INT_MIN, INT_MIN};
    int sum = 0;
    fo(i,0,n) {
        cin >> a[i];
        maxx[0] = max(maxx[0], a[i]);
        minn[0] = min(minn[0], a[i]);
        sum += a[i];
    }
    fo(i,0,m)  {
        cin >> b[i];
        maxx[1] = max(maxx[1], b[i]);
        minn[1] = min(minn[1], b[i]);
    }
    sum -= minn[0];
    sum -= maxx[0]; 
    if (minn[0] > maxx[1]) {
        if (k % 2 == 0){
            sum += minn[1] + minn[0];
        }else{
            sum += minn[0] +maxx[0];
        }
    } else {
        int find1=min(minn[0], minn[1]);
        int find2=min(maxx[0], maxx[1]);
        if (k % 2 == 0){
            sum += find1+find2 ;
        }else{
            sum += maxx[1] + maxx[0];
        }
    }
    cout <<sum << nl;
}


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