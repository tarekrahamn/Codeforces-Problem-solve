/*
Starting with the name of almighty ALLAH 
Author:  Tarek Rahman
Created: 27.07.2023 
United International University 
*/

#include <bits/stdc++.h>
#define   Tarek           ios::sync_with_stdio(false);cin.tie(0);
#define   ll              long long int
#define   vll             vector<ll>
#define   test            ll t;cin >> t;while(t--)
#define   pb              push_back
#define   nl              "\n"
using namespace std;

// PRIME NUMBER TEST//
bool prime(int n){
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0) return false;
    for(int i=3; i*i<=n; i+=2){
        if(n%i==0) return false;
    }
    return true;
}

//Exponent function 
ll expo(ll a, ll b, ll mod){
    ll res = 1;
    while (b>0){
        if(b & 1){
            res = (res *a) % mod;
        }
        a = (a*a) % mod;
        b = b >> 1;
    }
    return res;
}

void run(){
    ll n , m;
    cin >> n >> m;
    vll a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        a[i] %= m; // Compute modulo for each element
    }

    queue<pair<ll, ll>> pq; // Using a max heap
    vll c;

    for(ll i = 0; i < n; i++){
        if(a[i] == 0){
            c.pb(i+1);
        } else {
            pq.push({a[i], i+1});
        }
    }

     while (!pq.empty()) {
        auto x = pq.front();
        pq.pop();
        if (x.first != 0) {
            c.pb(x.second);
        }
    }

    for(auto k : c){
        cout << k << " ";
    }
    cout << nl;
}



int main(){
    Tarek
    test{
        run();
    }
    return 0;
}
