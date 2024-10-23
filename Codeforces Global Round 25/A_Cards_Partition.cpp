/*
    author:tarek200",
    created: 2024-09-26 01:08:23"
*/
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
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
/*----------------------------------------------------------------------------------------------------------------------------------*/

#define sz size()
#define YES cout<<"YES"<<endl;
#define NO  cout<<"NO"<<endl;
#define Yes cout<<"Yes"<<endl;
#define NO  cout<<"No"<<endl;
#define dbug(...)  __f (#__VA_ARGS__, __VA_ARGS__)

#define fora(i,a,b)    for(int i=a;i<b;i++)
#define fora2(i,a,b)   for(int i=a;i<=b;i++)
#define rof(i, a, b)   for (int i=a;i>=b;i--)
#define rof2(i, a, b)  for (int i=a;i>b;i--)
/*----------------------------------------------------------------------------------------------------------------------------------*/

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
/*----------------------------------------------------------------------------------------------------------------------------------*/

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
/*----------------------------------------------------------------------------------------------------------------------------------*/
template <typename T> istream &operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template <typename T> ostream &operator<<(ostream &ostream, const vector<T> &c){for (auto &it : c) cout << it << " "; return ostream;}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------*/
// Macros for convenience
#define nl              "\n"

#define u64 long long 
#define uu64 unsigned long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define des(x) (x).rbegin(), (x).rend()
// Constants
const u64 MOD = 1e9 + 7;
const u64 INF = 1e18;


// Binary Exponentiation
u64 binpow(u64 a, u64 b, u64 mod = MOD) {
    u64 res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
// GCD and LCM
u64 gcd(u64 a, u64 b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

u64 lcm(u64 a, u64 b) {
    return a / gcd(a, b) * b;
}

// Prime check (Basic)
bool is_prime(u64 n) {
    if (n < 2) return false;
    for (u64 i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Sieve of Eratosthenes (Prime generation)
vector<int> sieve(int n) {
    vector<int> primes;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    return primes;
}
// Modular Inverse (Fermat's Little Theorem)
u64 modinv(u64 a, u64 mod = MOD) {
    return binpow(a, mod - 2, mod);
}
struct DSU {
    vector<int> parent, size;

    DSU(int n) : parent(n), size(n, 1) {
        for (int i = 0; i < n; i++) parent[i] = i;
    }

    int find(int x) {
        if (x == parent[x]) return x;
        return parent[x] = find(parent[x]);
    }

    void unite(int x, int y) {
        x = find(x), y = find(y);
        if (x != y) {
            if (size[x] < size[y]) swap(x, y);
            parent[y] = x;
            size[x] += size[y];
        }
    }
};
/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/
// 2D Prefix Sum (Matrix Range Query)
vector<vector<int>> prefix_2d(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    vector<vector<int>> pref(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            pref[i][j] = matrix[i - 1][j - 1] + pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1];
        }
    }
    return pref;
}

// KMP String Matching Algorithm (Pattern Search)
vector<int> kmp_build(string& s) {
    int n = s.size();
    vector<int> pi(n, 0);
    for (int i = 1; i < n; i++) {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j]) j = pi[j - 1];
        if (s[i] == s[j]) j++;
        pi[i] = j;
    }
    return pi;
}

vector<int> kmp_search(string& text, string& pattern) {
    vector<int> pi = kmp_build(pattern), result;
    int n = text.size(), m = pattern.size(), j = 0;
    for (int i = 0; i < n; i++) {
        while (j > 0 && text[i] != pattern[j]) j = pi[j - 1];
        if (text[i] == pattern[j]) j++;
        if (j == m) {
            result.push_back(i - m + 1);
            j = pi[j - 1];
        }
    }
    return result;
}

// Dijkstra's Algorithm for Shortest Path
vector<u64> dijkstra(int src, int n, vector<vector<pair<int, int>>>& adj) {
    vector<u64> dist(n, INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dist[src] = 0;
    pq.push({0, src});
    while (!pq.empty()) {
        int v = pq.top().second;
        u64 d = pq.top().first;
        pq.pop();
        if (d != dist[v]) continue;
        for (auto& edge : adj[v]) {
            int to = edge.first;
            u64 len = edge.second;
            if (dist[v] + len < dist[to]) {
                dist[to] = dist[v] + len;
                pq.push({dist[to], to});
            }
        }
    }
    return dist;
}

// BFS (Breadth-First Search)
void bfs(int src, int n, vector<vector<int>>& adj) {
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(src);
    visited[src] = true;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        // Process node v
        for (int u : adj[v]) {
            if (!visited[u]) {
                visited[u] = true;
                q.push(u);
            }
        }
    }
}

// DFS (Depth-First Search)
void dfs(int v, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[v] = true;
    // Process node v
    for (int u : adj[v]) {
        if (!visited[u]) {
            dfs(u, adj, visited);
        }
    }
}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/

void Broken_Heart(int t){
    int  n ,k;
    cin >> n >>k;
    vector<int> a(n);
    cin >> a;
    int odd =0,even=0;
    int evmax=0,oddmax=0;
    fora(i,0,n){
        if(i%2==0){
            evmax=(evmax,a[i]);
            even++;
        }else{
            oddmax=max(oddmax,a[i]);
            odd++;
        }
    }
    cout << max(odd+oddmax,even+evmax) << nl;
}
int32_t main() {
    fastio();
    auto start1 = high_resolution_clock::now();
    int t=1;
    cin >>t ; 
    while(t--){
        cout << "Case " << t++ << ": ";
        Broken_Heart(t);
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
    #ifdef ONLINEJUDGE
        cerr << "Time: " << duration . count() / 1000 << endl;
    #endif
}