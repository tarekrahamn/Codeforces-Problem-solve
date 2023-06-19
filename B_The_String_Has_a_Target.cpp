/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** Author:  tarek200 *************************\\
**************** Created: 02.04.2023 ************************\\
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
void run(){
   ll x;
   cin >> x;
   string s;
   cin >> s;
   ll MinNum=-1,M=100;
   for(ll i=0;i<x;i++){
       if(s[i]-'a'<=M){
           MinNum=i;
           M=s[i]-'a';
        }
    }
   string y;
   y+=s[MinNum];
   for(ll i=0;i<x;i++){
   if(i==MinNum)
      continue;
      y+=s[i];
     }
     cout<<y<<"\n";
}
int main() {
    ll t;
    cin >> t;
    while (t--) {
        run();
    }
    return 0;
}
