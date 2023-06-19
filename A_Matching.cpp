/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** Author:  tarek200 *************************\\
**************** Created: 20.04.2023 ************************\\
**/
#include <bits/stdc++.h>
#define   Tarek           ios::sync_with_stdio(false);cin.tie(0);
#define   ll              long long int
#define   ull             unsigned long long int
#define   test            int t;cin>>t;while(t--)
#define   push            push_back
#define   pop             pop_back
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   mod             1000000007
#define   loop            for(ll i=0;i<n;i++)
const int N               = (int) 1e6+5;
const int M               = (int) 1e9+5;
using namespace std;
int main() {
    Tarek
    test {
        string s;
        cin >> s;

        int ans = 1;
        int len = s.length();

        for (int stsrt = len-1; stsrt >= 0; stsrt--) {
            char ch = s[stsrt];
            if (ch == '?') {
                if (stsrt == 0) {
                    ans *= 9;
                } else {
                    ans *= 10;
                }
            }
        }

        if (s[0] == '0') {
            cout << "0" << endl;
        } else {
            cout << ans << endl;
        }
    }

    return 0;
}