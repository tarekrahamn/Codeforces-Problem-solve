/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** author:  tarek200 *************************\\
**************** created: 16.03.2023 ************************\\
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
    int x,y;
    scanf("%d%d",&x,&y);
    ll ans = 0;
    int mx[x+2] = {0};
    for(int i=0;i<y;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        if(a>b){
            swap(a,b);
            mx[b] = max(mx[b], a);
        }
    }
    for(int i = 1; i <= x; i++){
        mx[i] = max(mx[i], mx[i-1]);
    }
    for(int i = 1; i <= x; i++){
        ans += i-mx[i];
    }
    printf("%d\n",ans);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        UIU();
    }
    return 0;
}