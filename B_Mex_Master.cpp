/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** author:  tarek200 *************************\\
**************** created: 15.03.2023 ************************\\
*
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
    int n;
    scanf("%d",&n);
    vector<int>dp(n);
    //map<int,int>mp;
    int a=0,b=0,c;
    for(int i=0;i<n;i++){
        cin >> dp[i];
        if(dp[i] == 0){
            a++;
        } else if(dp[i] == 1){
            b++;
        }
    }
    if(a <= (n + 1) / 2){
        printf("0\n");
    } else if(a + b == n && b > 0){
        printf("2\n");
    } else{
        printf("1\n");
    }
}
int main(){
    ll test;
    scanf("%lld", &test);
    while (test--){
        UIU();
    }
    return 0;
}
