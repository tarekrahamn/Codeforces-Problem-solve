/*
 * author:tarek200
 * created: 2024-10-24 20:58:06
 */
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <cassert>
#include <climits>
#include <tuple>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <deque>
#include <functional>
#include <numeric>
#include <utility>
#include <complex>
#include <chrono>
#include <random>
#include <array>
#include <fstream>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>// find_by_order, order_of_key
#define int_64 long long 
#define int_u64 unsigned long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define YES cout<<"YES"<<endl;
#define NO  cout<<"NO"<<endl;
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
    int_64  n,k,m;
    cin >> n ;
    vector<int_64>a(n);
    cin >> a;
  //  vector<int64_t> pre(n+1,0);
    unordered_set<int64_t> pre;
     pre.insert(0);
    int ans =0,sum=0;
    fora(i,0,n){
        sum += a[i];
        if (pre.count(sum)) {
            ans++;
            pre.clear();
            sum = 0;
             pre.insert(0);
        } else {
            pre.insert(sum);
        }
    }
   fora(i,0,pre.sz){
    cout << pre[i] << " ";
   }
   cout << nl;

int32_t main() {
    fastio();

    int t=1;
    cin >>t ; 
    int c=1;
    while(t--){
      //  cout << "Case #" << c++ << ": " ;
        Broken_Heart(t);
    }

    return 0;
}