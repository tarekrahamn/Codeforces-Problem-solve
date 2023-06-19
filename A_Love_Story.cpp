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
#define   FOR(n)          for(ll i=1;i<=n;i++)
#define   LOOP1(n)        for(ll i=0;i<n;i++)
#define   LOOP2(n)        for(ll i=0;i<n/2;i++)
#define   LOOP3(n)        for(ll i=n;i>=0;i--)
const int N               = (int) 1e6+5;
const int M               = (int) 1e9+5;
using namespace std;


void run(){
    string s;
    cin>>s;
    string target ="codeforces";
    int solve=0;
    for(int i=0; i<10; i++)
    if(target[i]!=s[i]) 
        solve++;
    cout<<solve<<nl;
}

int main(){
    Tarek
    test{
        // cout << "Case #" << t << ": ";
        run();
    }
    return 0;
}