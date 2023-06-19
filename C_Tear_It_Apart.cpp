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
#define   loop            for(ll i=0;i<alp;i++)
const int N               = (int) 1e6+5;
const int M               = (int) 1e9+5;
using namespace std;

void run(){
    string str;
    cin >> str;
    ll n = str.length();
    ll max = INT_MAX;
    ll alp = 26;
    loop{
        ll cnt = 0, maxLen = 0;
        while (cnt < n){
            while (cnt < n && str[cnt] == i + 'a'){
                cnt++;
            }
            ll diff = cnt;
            while (diff < n && str[diff] != i + 'a'){
                diff++;
            }
            maxLen = (maxLen> diff - cnt) ? maxLen : diff - cnt;
            cnt = diff;
        }
        max = (max < maxLen) ? max : maxLen;
    }
    if (max == 0){
        printf("%d\n", max);
        return;
    }
     ll solve = ceil(log2(max));

    if (max > 0 && (max & (max-1)) == 0) {
        solve++;
    }
    printf("%d\n", solve);
}

int main()
{
   Tarek
   test{
    run();
   }
    return 0;
}
