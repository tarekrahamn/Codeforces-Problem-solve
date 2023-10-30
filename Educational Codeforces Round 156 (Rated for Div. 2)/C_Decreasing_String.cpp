/*Starting with the name of almighty ALLAH
Author:  Tarek Rahman
Created: 09.10.2023
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
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a*b)/gcd(a,b)
#define   dbug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define   all(x)          (x).begin(), (x).end()
#define   des(x)          (x).rbegin(), (x).rend()
#define   cinv(v)         for(auto &it:v)cin>>it;
#define   fo(i,a,b)      for(int i=a;i<b;i++)
#define   fora(i,a,b)     for(int j=a;j<b;j++)
#define   fora2(i,a,b)    for(int i=a;i<=b;i++)
#define   rof(i, a, b)    for (int i = a; i >=b; i--)
const int N = (int) 1e5 + 10;
const int X = (int) 1e8;
using namespace std;
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
//Sieve
vector<int> primes;
bitset<N> marked;
void sieve(int n){
    marked.reset();
    marked[1]=true;
    for(int i=2;i*i<N;i++){
        if(marked[i]){
            continue;
        }
        for(int j=i*i;j<N;j+=i){
            marked[j]=true;
        }
    }
    for(int i=2;i<N;i++){
        if(!marked[i]){
            primes.push_back(i);
        }
    }
}
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
void run(int t) {
    int a, b, x;
    char ch;
    cin >> a >> ch >> b >> x;

    int h = x / 60;
    int m = x % 60;

    map<string, int> mp;
    int cnt = 0;

    fo(i,0,1440) {
        int hr = a + h;
        int mn = b + m;
        if (mn >= 60) {
            hr++;
        }
        a = hr % 24;
        b = mn % 60;
        string hh,mm;
        hh = to_string(a);
        mm = to_string(b);
        // Convert integers to two-digit strings
        string h1,m1;
        if(hh.sz == 1){
            h1 += '0';
            h1 += hh[0];
            hh = h1;
        }
        if(mm.sz == 1){
            m1 += '0';
            m1 += mm[0];
            mm = m1;
        }
       // Concatenate hour and minute to create a time string
        string ans;
        ans = hh;
        ans += mm;
         // Reverse the minute string
        reverse(all(mm));
        // Check if the time string is a palindrome and not seen before
        if(mp[ans]!=0)  {
            break;  // Exit the loop if a time string is repeated or not a palindrome
        }
        if(mm==hh){
            cnt++;
            mp[ans]++;
        }
    }
    cout<<cnt<<nl;
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