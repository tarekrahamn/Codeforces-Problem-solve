
/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** Author:  tarek200 *************************\\
**************** Created: 30.04.2023 ************************\\
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
#define   nl              "\n"
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   mod             1000000007
#define   PI              3.14159265358979323846
#define   srt(dp)         sort(dp.begin(), dp.end());
#define   FOR(n)          for(ll i=1;i<=n;i+=2)
#define   LOOP(n)         for(ll i=0;i<n;i++)
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
void run() {
    ll n;
    scanf("%lld", &n);
    if (n == 1) {
        cout << 1 << nl;
        return;
    }
    if (n % 2 != 0){
       cout << -1 << nl;
        return;
    }
    FOR(n){
        printf("%lld %lld ", i+1, i );
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        run();
    }

    return 0;
}
