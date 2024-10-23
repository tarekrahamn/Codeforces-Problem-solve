#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int mex(unordered_set<int>& s) {
    int mex = 0;
    while (s.count(mex))
        mex++;
    return mex;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_set<int> c;

        for (int i = 0; i < n; ++i)
            cin >> a[i];

        for (int i = 0; i < n; ++i) {
            if (c.empty()) {
                c.insert(a[i]);
            } else if (c.count(mex(c))) {
                // If Bob has a winning strategy, he will choose an element
                // that makes Alice lose. So, if the MEX exists in c, Bob will choose it.
                int m = mex(c);
                if (c.count(a[i]) || a[i] < m) {
                    c.insert(a[i]);
                } else {
                    break; // Bob wins
                }
            } else {
                // If Alice has a winning strategy, she will choose an element
                // that ensures Bob loses. So, she'll pick an element that makes Bob win.
                int m = mex(c);
                if (!c.count(a[i]) && a[i] >= m) {
                    c.insert(a[i]);
                } else {
                    break; // Alice wins
                }
            }
        }

        cout << mex(c) << endl;
    }

    return 0;
}
