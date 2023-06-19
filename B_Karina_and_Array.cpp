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
        int n;
        cin >> n;
        ll a[n];
        loop {
            cin >> a[i];
        }
        ll max1 = LLONG_MIN, max2 = LLONG_MIN;
        ll min1 = LLONG_MAX, min2 = LLONG_MAX;
        loop {
            if (a[i] >= max1) {
                max2 = max1;
                max1 = a[i];
            } else if (a[i] > max2) {
                max2 = a[i];
            }
            if (a[i] <= min1) {
                min2 = min1;
                min1 = a[i];
            } else if (a[i] < min2) {
                min2 = a[i];
            }
        }
        ll ans1 = max1 * max2;
        ll ans2 = min1 * min2;
        ll ans3 = max1 * min1;
        cout << max(max(ans1, ans2), ans3) << endl;
    }
    return 0;
}
