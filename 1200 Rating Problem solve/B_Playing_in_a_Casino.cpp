#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    scanf("%lli",&t);
    while(t--){
        ll n,m;
        scanf("%lli %lli",&m,&n);
        ll a[n][m];
        for(ll j=0;j<m;j++){
            for(ll i=0;i<n;i++){
                scanf("%lli",&a[i][j]);
            }
        }
        ll ans=0;
        for(ll i=0;i<n;i++){
            sort(a[i],a[i]+m);
            for(ll j=m-2,c=1;j>=0;j--){
                ans+=a[i][j+1]-c*a[i][j];
                a[i][j]+=a[i][j+1];
                c++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}