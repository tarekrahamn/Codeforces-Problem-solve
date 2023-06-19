/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** Author:  tarek200 *************************\\
**************** Created: 06.05.2023 ************************\\
**/
#include <bits/stdc++.h>
#define   Tarek           ios::sync_with_stdio(false);cin.tie(0);
#define   ll              long long int
#define   ull             unsigned long long int
#define   ld              long double
#define   test            int t;cin >> t;while(t--)
#define   push            push_back
#define   pop             pop_back
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   si(x)           scanf("%lld",&x);
#define   si2(x,y)           scanf("%lld%lld",&x,&y);
#define   exit            return ;
#define   next            continue;
#define   B               break;
#define   nl              "\n"
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   mod             1000000007
#define   PI              3.14159265358979323846
#define   srt(dp)         sort(dp.begin(), dp.end());
#define   FOREACH(it, l)    for (auto it = l.begin(); it != l.end(); it++)
#define   FOR(n)          for(int i=1;i<=n;i++)
#define   LOOP1(n)        for(ll i=0;i<n;i++)
#define   LOOP2(m)        for(ll j=0;j<m;j++)
#define   LOOP3(n)        for(ll i=n;i>=0;i--)
const int N               = (int) 1e6+5;
const int M               = (int) 1e9+5;
using namespace std;

int find(vector<ll>& parent, ll x) {
    if (x == parent[x]) {
        return x;
    }
    parent[x] = find(parent, parent[x]);
    return parent[x];
}
void unite(vector<ll>& parent, vector<ll>& size, ll x, ll y) {
    x = find(parent, x);
    y = find(parent, y);
    if (x != y) {
        if (size[x] < size[y]) {
            swap(x, y);
        }
        parent[y] = x;
        size[x] += size[y];
    }
}

void run() {
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    LOOP1(n) {
        LOOP2(m){
            cin >> a[i][j];
        }
    }

    vector<pair<ll, ll>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    vector<ll> parent(n * m);
    vector<ll> size(n * m, 1);
    for (ll i = 0; i < n * m; i++) {
        parent[i] = i;
    }

   LOOP1(n) {
        LOOP2(m){
            if (a[i][j] == 0) {
                next
            }
            for (auto d : dir) {
                ll x = i + d.first, y = j + d.second;
                if (0 <= x && x < n && 0 <= y && y < m && a[x][y] != 0) {
                    unite(parent, size, i * m + j, x * m + y);
                }
            }
        }
    }

    unordered_map<ll,ll> mp;
    LOOP1(n) {
        LOOP2(m){
            if (a[i][j] == 0) {
                next
            }
            mp[find(parent, i * m + j)] += a[i][j];
        }
    }

    ll ans = 0;
    for (auto p : mp) {
        ans = max(ans, p.second);
    }
    cout << ans << endl;
}

int main() {
    Tarek
    test {
        run();
    }
    return 0;
}

