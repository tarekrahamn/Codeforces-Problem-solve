/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** Author:  tarek200 *************************\\
**************** Created: 29.04.2023 ************************\\
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
#define   FOR(n)          for(ll i=0;i<n;i++)
#define   LOOP            for(ll i=1;i<=n;i++)
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
int main (){
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        unordered_map<string,ll>map;
        unordered_set<string> s;
        string s1,s2;
        FOR(n){
            string str;
            cin>>str;
            if (i==0){
                s1=str;
            }
            map[str]++;
        }

        ll solve =0;
        for (auto itr = map.begin(); itr != map.end(); itr++) {
            if (itr->second > solve) {
                solve = itr->second;
                s2 = itr->first;
            }
        }
        if (s1==s2){
            cout<<solve<<nl;
        }else{
            cout<<map[s1]<<nl;
        }
    }

    return 0;
}
