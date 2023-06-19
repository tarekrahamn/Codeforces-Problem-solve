#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (a[n - 1] == 0) {
            cout << "YES\n";
            int i = n - 1;
            while (i >= 0) {
                int j = i;
                int f = 0, one = 0;
                while (j >= 0 && f <= a[j]) {
                    f = a[j];
                    one += a[j];
                    j--;
                }
                for (int k = j + 1; k < i; k++) {
                    cout << "0 ";
                }
                cout << one << " ";
                i = j;
            }
            cout << "\n";
        } else {
            cout << "NO\n";
        }
    }
}
//#include <bits/stdc++.h>
// using namespace std;

// #define ll  long long int
// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


// int main(){
//    Faster;
//    int t;                     cin>>t;
//    while(t--){
//       int n;                  cin>>n;
//       vector<int> a(n);
//       for(int i=0;i<n;i++){
//          cin>>a[i];
//       }

//       if(a[n-1]==1){
//          cout<<"NO"<<endl;
//          continue;
//       }

//       cout<<"YES"<<endl;

//       vector<int> ans;
//       for(int i=n-1;i>-1;i--){
//          if(a[i]==0){
//             if(i==0 or a[i-1]==0){
//                ans.push_back(0);
//             }
//             else if(a[i-1]==1){
//                int cnt=0,temp;
//                int j=i-1;
//                int nxt;
//                while(j>-1 and a[j]==1){
//                   cnt++;
//                   nxt=j;
//                   j--;
//                }
//                temp=cnt;
//                while(cnt--){
//                   ans.push_back(0);
//                }
//                ans.push_back(temp);
//                i=nxt+1;
//             }
//          }
//       }
//       for(int i=0;i<ans.size();i++){
//          cout<<ans[i]<<" ";
//       }
//       cout<<endl;
//    }
//    return 0;
// }
