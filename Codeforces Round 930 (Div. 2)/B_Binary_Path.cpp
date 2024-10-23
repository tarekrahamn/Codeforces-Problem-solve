#include <bits/stdc++.h>
using namespace std;

#define fora(i,a,b) for(int i=a;i<b;i++)
#define rof(i,a,b) for(int i=a;i>=b;i--)

void build(int node, int start, int end, string& s, vector<int>& segtree) {
    if (start == end) {
        if (s[start] == '0')
            segtree[node] = start;
        else
            segtree[node] = INT_MAX;
        return;
    }
    int mid = (start + end) / 2;
    build(2 * node, start, mid, s, segtree);
    build(2 * node + 1, mid + 1, end, s, segtree);
    segtree[node] = min(segtree[2 * node], segtree[2 * node + 1]);
}

int query(int node, int start, int end, int l, int r, vector<int>& segtree) {
    if (start > r || end < l) return INT_MAX;
    if (start >= l && end <= r) return segtree[node];
    int mid = (start + end) / 2;
    int left = query(2 * node, start, mid, l, r, segtree);
    int right = query(2 * node + 1, mid + 1, end, l, r, segtree);
    return min(left, right);
}

string constructAnswer(int n, string s[2], vector<int>& segtree) {
    string ans = "";
    int pos = 0;
    bool flag = false;
    fora(i, 0, n) {
        ans.push_back(s[pos][i]);
        if (i == n - 1) {
            if (pos == 0) {
                ans.push_back(s[1][i]);
            }
            break;
        }
        if (pos == 0 && query(1, 0, n - 1, i + 1, n - 1, segtree) < query(1, 0, n - 1, i, i, segtree)) {
            pos = 1;
            i--;
        }
    }
    return ans;
}

int computeVal(int n, string s[2], string ans) {
    vector<int> hue(n, 0);
    rof(i, n, 1) {
        if (ans[i] == s[1][i - 1]) {
            hue[i - 1] = 1;
        } else {
            break;
        }
    }

    int way = 0;
    bool flag = false;
    fora(i, 0, n) {
        if (ans[i] == s[0][i]) {
            flag = true;
            if (hue[i]) {
                way++;
            }
        } else if (flag) {
            break;
        }
    }
    return way;
}

void Broken_Heart(int t) {
    int n;
    cin >> n;
    string s[2];
    fora(i, 0, 2) {
        cin >> s[i];
    }

    vector<int> segtree(4 * n);
    build(1, 0, n - 1, s[0], segtree);

    string ans = constructAnswer(n, s, segtree);

    int val = computeVal(n, s, ans);

    cout << ans << endl << val << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    fora(i, 0, t) {
        Broken_Heart(i);
    }
    return 0;
}
