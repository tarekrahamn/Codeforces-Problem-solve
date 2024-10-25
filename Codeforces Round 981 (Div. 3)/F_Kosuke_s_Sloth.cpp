#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define Yes cout<<"Yes"<<"\n";
#define No  cout<<"No"<<"\n"; 
const ll MOD = 1000000007;

void run(int t){
 ll n, k;
	cin >> n >> k;
 
	if (k == 1) {
		cout << (n % MOD) << nl;
		return;
	}
 
	ll first = 0;
	vector<ll> fib(2*k + 1);
	fib[0] = 0;
	fib[1] = 1;
	for (ll i = 2; i <= 2*k; i++) {
		fib[i] = (fib[i - 1] + fib[i - 2]) % k;
		if (fib[i] == 0) {
			first = i;
			break;
		}
	}
 
	cout << ((n*first ) % MOD) << nl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    int c  = 1;
    while(t--){
        //cout << "Case #" << c++ << ": ";
        run(t);
    }
    return 0;
}