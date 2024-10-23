#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, q; cin >> n >> q;
    vector<int> a(n);
    for(auto &x: a) cin >> x;

    map<int,int> mp;

    for(int i = 0; i < n - 1; i ++) {
        int num = a[i + 1] - a[i] - 1;
        int tot = (n - (i + 1)) * (i + 1);
        mp[tot] += num;
    }

    for(int i = 0; i < n; i++) {
        int tot = (i * (n - (i + 1))) + (n - 1);
        mp[tot]++;
    }

    while(q--) {
        int k; cin >> k;
        cout << mp[k] << " ";
    }
    cout << "\n";;
}

int32_t main() {    
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); 
    int t; cin >> t;
    while(t--) solve();
}


#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        vector<ll> v(n);
        ll ma = 0, sum = 0;
        for(auto &it : v){
            cin >> it;
            ma = max(ma, it);
            sum += it;
        }
        ll ans = 0;
        for(ll i = 1; i <= n; i++){
            ll div = (sum + k) / i;
            if(div * i < sum || div < ma) continue;
            ans = max(ans, i);
        }
        cout << ans << "\n";
    }
    return 0;
}