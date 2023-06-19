#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        ans += (k - 1);
    }

    if (ans&1) {
        cout << "tarek\n";
    } else {
        cout << "rakib\n";
    }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}

 		 						 	  			 		 	 				