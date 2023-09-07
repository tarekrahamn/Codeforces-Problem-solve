#include <bits/stdc++.h>
#define int long long int
#define ull unsigned long long int
#define ld long double
#define vi vector<int32_t>
#define vll vector<int>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define eb emplace_back
#define sz size()
#define ff first
#define ss second
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define ONLINE_JUDGE
#define checkmate return 0;
#define nl "\n"
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define PI 3.141592653589793238462
#define dbug(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define all(x) (x).begin(), (x).end()
#define des(x) (x).rbegin(), (x).rend()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define cinv(v)        \
    for (auto &it : v) \
        cin >> it;
#define print1(a)    \
    for (auto x : a) \
    cout << x.ff << " " << x.ss << endl
#define fo(i, a, b) for (int i = a; i < b; i++)
#define fora(i, a, b) for (int j = a; j < b; j++)
#define fora2(i, a, b) for (int i = a; i <= b; i++)
#define rof(i, a, b) for (int i = a; i >= b; i--)
const int N = (int)1e5 + 10;
const int X = (int)1e8;
using namespace std;
// PRIME NUMBER TEST//
vector<int> seive;
void primecheck()
{
    vector<bool> prime(N, true);
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= N; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                prime[j] = 0;
            }
        }
    }
    for (int i = 0; i <= N; i++)
    {
        if (prime[i])
            seive.push_back(i);
    }
}

int gcd(int a, int b)
{
    if (b == 0 || a == 0)
        return max(a, b);
    return gcd(b, a % b);
}
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
bool prime1(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
bool prime(char a, char b)
{
    string s = "";
    s += a, s += b;
    int x = stoi(s);
    return prime1(x);
}

// Exponent function
int expo(int a, int b, int mod)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}

template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}
// Graph on 2D Grid
/*----------------------Graph Moves----------------*/
// const int dx[]={+1,-1,+0,+0};
// const int dy[]={+0,+0,+1,-1};
// const int dx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
// const int dy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
// const int dx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
// const int dy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

bool pos(const vector<int> &a, int n, int c, int mid)
{
    int count = 1;
    int prev = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] - prev >= mid){
            count++;
            prev = a[i];
        }
        if (count >= c){
            return true;
        }
    }
    return false;
}

void run(int t){
    int n, c;
    cin >> n;
    vll a(n);
    cinv(a);
    cin >> c;
    sort(all(a));
    int l = 0, r = a[n - 1] - a[0], ans = -1;
    while (l <= r){
        int mid = (l + r) >>1 ;
        if (pos(a, n, c, mid)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    cout << ans << nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
#endif
    clock_t z = clock();
    int t = 1;
    cin >> t;
    while (t--)
    {
        run(t);
    }
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}