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
#define   loop            for(ll i=0;i<n;i++)
const int N               = (int) 1e6+5;
const int M               = (int) 1e9+5;
using namespace std;
int main() {
    Tarek
    test {
       int n; cin >> n;
       int a[n], b[n];
       
       int fst = -1 , last = -1, mn = INT_MAX, mx = -1;
      loop  cin >> a[i];
      loop  cin >> b[i];

      loop {
         if (a[i] != b[i]) {
           fst = i;
           break;
         }
         
       }
       for (int i = n-1; i >= 0; i--) {
         if (a[i] != b[i]) {
           last = i;
           break;
         }
         
       }
       for (int i = fst; i <= last; i++) {
         mx = max(mx, a[i]);
         mn = min(mn, a[i]);
       }
 
       
       if (fst > 0) {
        for (int i = fst-1; i >= 0; i--) {
          if (a[i] <= mn) {
            fst--;
            mn = a[i];
          }
          else break;
        }
       }

       if (last < n-1) {
        for (int i = last+1; i < n; i++) {
          if (a[i] >= mx) {
            last++;
            mx = a[i];
          }
          else break;
        }
       }
       cout << fst+1 <<' ' <<last+1<<'\n';
    }
    return 0;
}
