/*

########## Starting with the name of almighty ALLAH #######################

*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**
*             In the name of Allah, Most Gracious, Most Merciful             *
**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*

**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ ***********
**************** Author:  tarek200 *************************
**************** Created: 25.05.2023 ***********************
$$$$$$$$$$ Practice is the only shortcut to improve $$$$$$$$$$$$$$$$$$$$$$$$
**/
#include <bits/stdc++.h>
#define   Tarek           ios::sync_with_stdio(false);cin.tie(0);
#define   ll              long long int
#define   ull             unsigned long long int
#define   ld              long double
#define   vi              vector<int>
#define   vll             vector<ll>
#define   vc              vector<char>
#define   vs              vector<string>
#define   test            ll t;cin >> t;while(t--)
#define   push            push_back
#define   pop             pop_back
#define   sz              size()
#define   ff              first
#define   ss              second
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   exit            return ;
#define   next            continue;
#define   B               break;
#define  checkmate        return 0;
#define   nl              "\n"
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   mod             1000000007
#define   PI              3.14159265358979323846
#define   all(x)         (x).begin(), (x).end()
#define   rev(dp)         reverse(dp.begin(), dp.end());
#define   FOREACH(it, l)  for (auto it = l.begin(); it != l.end(); it++)
#define   cinv(v)         for(auto &it:v)cin>>it;
#define   FOR(i,a,b)      for(ll i=a;i<b;i++)
#define   LOOP(i,a,b)     for(ll j=a;j<b;j++)
#define   LOOP2(i,a,b)    for(ll k=a;k<=b;k++)
#define   ROF(i, a, b)    for (ll i = a; i >=b; i--)
const long long int N     = (ll) 1e7+1;
const long long int M     = (ll) 1e9+5;
using namespace std;
int main() {
    Tarek
    test {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count = 0;
        FOR(i,0,n) {
            if (s[i] == '('){
                count++;
            }
            else{
                count--;
            }
        }

        if (count != 0) {
            cout << "-1" << nl;
            next
        }

        int c = 0;
        int zc = 0;
        FOR(i,0,n) {
            if (s[i] == '(')
                zc++;
            else
                zc--;

            if (zc < 0) {
                c++;
                break;
            }
        }

        zc = 0;
        FOR(i,0,n) {
            if (s[i] == ')')
                zc++;
            else
                zc--;

            if (zc < 0) {
                c++;
                break;
            }
        }

        if (c < 2) {
            cout << "1" << nl;
            FOR(i,0,n){
                cout << "1 ";
            }
            cout << nl;
        } else {
            int col[n];
            int i = 0;
            int j = n - 1;

            ROF(i,j,i) {
                if (s[i] == ')' && s[j] == ')') {
                    col[i++] = 2;
                    col[j--] = 1;
                } else if (s[i] == '(' && s[j] == '(') {
                    col[i++] = 1;
                    col[j--] = 2;
                } else if (s[i] == ')' && s[j] == '(') {
                    col[j--] = 2;
                    col[i++] = 2;
                } else {
                    col[i++] = 1;
                    col[j--] = 1;
                }
            }

            cout << "2" << nl;
            FOR(i,0,n){
                cout << col[i] << " ";
            }
            cout << nl;
        }
    }
    checkmate
}
