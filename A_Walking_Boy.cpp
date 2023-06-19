/*
 
########## Starting with the name of almighty ALLAH #######################
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**
            In the name of Allah, Most Gracious, Most Merciful             
                   লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ 
                        Author:  tarek200 
                        Created: 28.05.2023 
$$$$$$$$$$$$$$  Practice is the only shortcut to improve  $$$$$$$$$$$$$$$$$$$$$$$$
**/
#include <bits/stdc++.h>
#define   Tarek           ios::sync_with_stdio(false);cin.tie(0);
#define   ll              long long int
#define   ull             unsigned long long int
#define   ld              long double
#define   vi              vector<int>
#define   vll             vector<ll>
#define   vc              vector<char>
#define   vs              vector<string>
#define   test            ll t;cin >> t;while(t--)
#define   pb            push_back
#define   pp             pop_back
#define   sz              size()
#define   ff              first
#define   ss              second
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   exit            return ;
#define   next            continue;
#define   B               break;
#define  checkmate        return 0;
#define   nl              "\n"
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   mod             1000000007
#define   PI              3.14159265358979323846
#define   all(x)         (x).begin(), (x).end()
#define   des(x)         (x).rbegin(), (x).rend()
#define   FOREACH(it, l)  for (auto it = l.begin(); it != l.end(); it++)
#define   cinv(v)         for(auto &it:v)cin>>it;
#define   FOR(i,a,b)      for(ll i=a;i<b;i++)
#define   LOOP(i,a,b)     for(ll j=a;j<b;j++)
#define   LOOP2(i,a,b)    for(ll i=a;i<=b;i++)
#define   ROF(i, a, b)    for (ll i = a; i >b; i--)
const long long int N     = (ll) 1e7+1;
const long long int M     = (ll) 1e9+5;
using namespace std;
// int main(){
//     Tarek
//     test{
//         run();
//     }
//     checkmate
// }
// #include <iostream>
// #include <vector>

// using namespace std;

bool canWalkTwice(int n, const vector<int>& messages) {
    if (n <= 2) {
        return false; // Not enough messages to walk twice
    }

    int walkStart = messages[0]; // First walk starts at the beginning
    int walkEnd = walkStart + 120; // First walk ends after 120 minutes

    for (int i = 1; i < n - 1; i++) {
        int prevMessage = messages[i - 1];
        int currentMessage = messages[i];

        // Check if current message allows for a walk between it and the previous message
        if (currentMessage - prevMessage >= 240) {
            walkStart = currentMessage;
            walkEnd = walkStart + 120;
        } else {
            // Check if the current message is within the previous walk interval
            if (currentMessage >= walkStart && currentMessage <= walkEnd) {
                walkStart = currentMessage; // Adjust the start of the current walk
                walkEnd = walkStart + 120; // Adjust the end of the current walk
            } else {
                return true; // Found a valid walk twice scenario
            }
        }
    }

    return false; // No valid walk twice scenario found
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> messages(n);
        for (int i = 0; i < n; i++) {
            cin >> messages[i];
        }

        bool possible = canWalkTwice(n, messages);
        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}
