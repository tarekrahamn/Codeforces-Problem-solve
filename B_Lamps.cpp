#include <bits/stdc++.h>
using namespace std;

#define ll  long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main(){
   Faster;
   int t;                     cin>>t;
   while(t--){
      int n;                  cin>>n;

      vector<int> a(n);
      vector<ll> b(n);

      for(int i=0;i<n;i++){
         cin>>a[i];
         cin>>b[i];
      }

      map<int,vector<ll>> lamps;
      
      for(int i=0;i<n;i++){
         lamps[a[i]].push_back(b[i]);
      }

      for(int i=1;i<=n;i++){
         if(lamps[i].empty())continue;
         sort(lamps[i].begin(),lamps[i].end(),greater<ll>());
      }

      ll ans=0;
      for(auto [v,lights]:lamps){
         int turnedOn=0;
         for(auto i:lights){
            if(turnedOn==v)break;
            turnedOn++;
            ans+=i;
         }
      }

      cout<<ans<<endl;
   }
   return 0;
}
