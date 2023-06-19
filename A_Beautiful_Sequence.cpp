/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** Author:  tarek200 *************************\\
**************** Created: 31.03.2023 ************************\\
**/
#include <bits/stdc++.h>
using namespace std;
#define     ll                                long long int
#define     ull                               unsigned long long int
#define     pb                                push_back
const int   N                               = (int) 1e6+5;
const int   M                               = (int) 1e9+5;
const int   MOD                             = (int) 1000000007;
const int   max_prime                       = (int) 1e6+3;
const int   BLK                             = (int) 700;
const int   X                               = 100000;
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
void UIU(){
    ll x;
    scanf("%lld",&x);
    vector<ll>dp(x);
    for(ll i=0;i<x;i++){
        cin >> dp[i];
    }
    bool f= false;
    for(ll i=0;i<x;i++){
        if(dp[i]<=i+1){
            f = true;
            break;
        }
    }
    if(f){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; 
    scanf("%lld", &t);
    while(t--){
        UIU();
    }
    return 0;
}