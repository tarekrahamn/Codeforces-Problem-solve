#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define   fora(i,a,b)     for(int i=a;i<b;i++)
#define   fora2(i,a,b)    for(int i=a;i<=b;i++)
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   nl              "\n"
#define   all(x)          (x).begin(), (x).end()
void run(int t){
    int n,k;
    cin >> n;
    vector<int>a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    int ans = 0;
    sort(all(a));
    fora(i,1,n){
        ans+=(a[i]-a[i-1]);
    }
    cout << ans << nl;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        run(t);
    }
}