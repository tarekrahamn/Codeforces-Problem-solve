
/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** Author:  tarek200 *************************\\
**************** Created: 15.04.2023 ************************\\
**/
#include <bits/stdc++.h>
#define   Tarek           ios::sync_with_stdio(false);cin.tie(0);
#define   ll              long long int
#define   ull             unsigned long long int
#define   test            int t;cin>>t;while(t--)
#define   pb              push_back
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   mod             1000000007
const int N               = (int) 1e6+5;
const int M               = (int) 1e9+5;
using namespace std;
// PRIME NUMBER TEST//
bool prime(int n){
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3; i*i<=n; i+=2){
        if(n%i==0)return false;
    }
    return true;
}
int main(){
    Tarek
    test{
        string s;
        cin >> s;
        string t;
        for (auto &i : s) {
            if (i == '_') {
                if (t.empty() || t.back() == '_')
                    t.push_back('^');

                t.push_back('_');
            } else {
                t.push_back(i);
            }
        }
        if (t.back() == '_') {
            t.push_back('^');
        }
        if (t.size() == 1) {
            t += '^';
        }
        cout << t.size() - s.size() << endl;
    }
    return 0;
}
