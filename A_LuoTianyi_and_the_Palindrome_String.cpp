/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** Author:  tarek200 *************************\\
**************** Created: 08.05.2023 ************************\\
**/
#include <bits/stdc++.h>
#define   Tarek           ios::sync_with_stdio(false);cin.tie(0);
#define   ll              long long int
#define   ull             unsigned long long int
#define   ld              long double
#define   test            ll t;cin >> t;while(t--)
#define   push            push_back
#define   pop             pop_back
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   exit            return ;
#define   next            continue;
#define   B               break;
#define   nl              "\n"
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   mod             1000000007
#define   PI              3.14159265358979323846
#define   srt(dp)         sort(dp.begin(), dp.end());
#define   FOREACH(it, l)  for (auto it = l.begin(); it != l.end(); it++)
#define   FOR(n)          for(ll i=1;i<=n;i++)
#define   LOOP1(m)        for( i=0;i<m;i++)
const int N               = (int) 1e6+5;
const int M               = (int) 1e9+5;
using namespace std;
const int MAX_N = 505;
int dp[MAX_N][MAX_N];
int solve(const string& s) {
    int n = s.size();
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; i++) {
        dp[i][i] = 1;
    }
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;

            if (s[i] == s[j]) {
                dp[i][j] = dp[i+1][j-1] + 2;
            } else {
                dp[i][j] = max(dp[i+1][j], dp[i][j-1]); 
            }
        }
    }
    for (int len = n; len >= 1; len--) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;

            if (dp[i][j] != len) {
                return len;
            }
        }
    }

    return -1;
}

int main() {
    Tarek
    test{
        string s;
        cin >> s;

        int ans = solve(s);

        cout << ans << endl;
    }

    return 0;
}
