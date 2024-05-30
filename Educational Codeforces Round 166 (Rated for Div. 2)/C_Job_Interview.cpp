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


#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>// find_by_order, order_of_key
#define int long long int
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define sz size()
#define YES cout<<"YES"<<endl;
#define NO  cout<<"NO"<<endl;
#define ONLINE_JUDGE
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

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
/*----------------------------------------------------------------------------------------------------------------------------------*/
template <typename T> istream &operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template <typename T> ostream &operator<<(ostream &ostream, const vector<T> &c){for (auto &it : c) cout << it << " "; return ostream;}
template<typename T1, typename T2>istream &operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T1, typename T2> ostream &operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------*/

int gcd(int a, int b) {if (b > a) {return gcd(b, a);}if (b == 0) {return a;}return gcd(b, a % b);}
int expo(int a, int b, int mod) {int res = 1;while (b > 0) {if (b & 1) {res = (res * a) % mod;}a = (a * a) % mod;b = b >> 1;}return res;}
void extendgcd(int a, int b, int *v) {if (b == 0) {v[0] = 1;v[1] = 0;v[2] = a;return;}extendgcd(b, a % b, v);int x = v[1];v[1] = v[0] - v[1] * (a / b);v[0] = x;return;}//pass an arry of size1 3
int mminv(int a, int b) {int arr[3];extendgcd(a, b, arr);return arr[0];} //for non prime b  

/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/

void Broken_Heart(int t){
    int n, m;
    cin >> n >> m;
    int len  = n+m+1;
    vector<int> a(len), b(len);
    cin >> a;
    cin >> b;
    int sp = 0, st = 0;
    int ph = 0, th = 0;
    vector<int> ap(a.sz), at(a.sz);
    auto assign = [&](vector<int>& ps, vector<int>& ts, int& ph, int& th, int& s) {
        fora(i,0,ps.sz){
            if ((ps[i] > ts[i] and ph <= n) or (ps[i] <= ts[i] and  th >= m)) {
                s += ps[i];
                //dbug(i,s,ap)
                ap[i] = 1;
                ph += (ps[i] > ts[i]) ? 1 : 0;
                th += (ps[i] <= ts[i]) ? 1 : 0;
                //dbug(i,ph,th)
            } else {
                s += ts[i];
                ap[i] = 0;
                th++;
                 //dbug(th)
            }
        }
    };
     //cout << ap << nl;
    //dbug(i,ap,at)
    assign(a, b, ph, th, sp);
    th = 0;
    ph = 0;
    auto assign_opposite = [&](vector<int>& ps, vector<int>& ts, int& ph, int& th, int& s) {
        fora(i,0,ps.sz){
            if (ps[i] < ts[i] and  th <= m) {
                s += ts[i];
                th++;
                at[i] = 0;
                 //dbug(i,s,th)
            } else if (ps[i] > ts[i] and  ph < n) {
                s += ps[i];
                ph++;
                at[i] = 1;
                 //dbug(i,at)
            } else {
                s += (th <= m) ? ts[i] : ps[i];
                at[i] = (th <= m) ? 0 : 1;
                th += (th <= m) ? 1 : 0;
                ph += (th > m) ? 1 : 0;
            }
        }
         // cout << at << endl;
         //dbug(i,s)
        //dbug(i,th,at)
    };

    assign_opposite(a, b, ph, th, st);
    vector<int>ans;
    //dbug(sp,st,a);
    //cout << at << nl;
    fora(i,0,a.sz) {
        int skill = 0;
        if (ap[i] == 1){
            skill = sp - a[i];
        }
        else if (at[i] == 0){
            skill = st - b[i];
        }
        ans.push_back(skill);
    }
    cout << ans << nl;
}

int32_t main() {
    fastio();
    auto start1 = high_resolution_clock::now();
    int t=1;
    cin >>t ; 
    while(t--){
        //cout << "Case " << t++ << ": ";
        Broken_Heart(t);
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
    #ifdef ONLINEJUDGE
        cerr << "Time: " << duration . count() / 1000 << endl;
    #endif
}