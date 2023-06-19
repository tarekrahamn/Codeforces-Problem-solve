#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 100005;

vector<int> adj[MAXN];
bool vis[MAXN];
int parent[MAXN];

bool dfs(int u, int p) {
    vis[u] = true;
    parent[u] = p;
    for (int v : adj[u]) {
        if (!vis[v]) {
            if (dfs(v, u)) return true;
        } else if (v != p) {
            // cycle found
            int curr = u;
            while (curr != v) {
                if (adj[curr].size() == 2) {
                    int cnt = 0;
                    for (int w : adj[curr]) {
                        if (w != parent[curr]) cnt++;
                    }
                    if (cnt == 2) {
                        // Fish Graph found
                        cout << "Fish Graph found: ";
                        cout << curr << " ";
                        for (int w : adj[curr]) {
                            if (w != parent[curr]) {
                                cout << w << " ";
                            }
                        }
                        cout << endl;
                        return true;
                    }
                }
                curr = parent[curr];
            }
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while(t--){
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i, 0);
        }
    }
    cout << "No Fish Graph found" << endl;
    }
    return 0;
}
