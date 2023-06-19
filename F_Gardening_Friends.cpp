#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+5;

vector<int> adj[N];
int d[N], nd[N], od[N], far, maxd, n, k, c;

void dfs(int u, int p, int dist) {
    d[u] = dist;
    if (dist > maxd) {
        maxd = dist;
        far = u;
    }
    for (int v : adj[u]) {
        if (v != p) {
            dfs(v, u, dist+k);
        }
    }
}

void dfs2(int u, int p, int ndist, int odist) {
    nd[u] = ndist;
    od[u] = odist;
    for (int v : adj[u]) {
        if (v != p) {
            dfs2(v, u, ndist+k, odist+k);
        }
    }
}

void solve() {
    cin >> n >> k >> c;
    for (int i = 1; i <= n; i++) {
        adj[i].clear();
    }
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    maxd = 0;
    dfs(1, 0, 0);
    int oldroot = far;
    maxd = 0;
    dfs(far, 0, 0);
    int newroot = far;
    dfs2(newroot, 0, 0, d[newroot]);
    int profit = 0;
    for (int v : adj[oldroot]) {
        if (v != newroot) {
            int newdist = nd[v];
            if (newdist > maxd) {
                maxd = newdist;
                far = v;
            }
            int pd = maxd+k-d[newroot];
            int np = pd-c;
            if (np > profit) {
                profit = np;
            }
        }
    }
    cout << profit << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
