

/*
 
               Starting with the name of almighty ALLAH 
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**
            In the name of Allah, Most Gracious, Most Merciful             
                   লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ 
                        Author:  tarek200 
                        Created: 17.06.2023 
                Practice is the only shortcut to improve  


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
#define   pb              push_back
#define   pp              pop_back
#define   sz              size()
#define   ff              first
#define   ss              second
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   exit            return ;
#define   next            continue;
#define   B               break;
#define   checkmate       return 0;
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
const ull MOD = 1000003;
#include <bits/stdc++.h>
using namespace std;
int run(vi &m,int Choose ){
    int left = 0,high=m.size()-1;
    int mid = (left + high)/2;
    while(left<high){
        if(m[mid]<Choose){
            left = mid+1;
        }else{
            high = mid;
        }
        mid = (left + high)/2;
    }
    if(m[mid]==Choose){
        return mid;
    }
    return -1;
}
int main(){
    int C=1;
    while(C){
        int T,Q;
        cin >> T >> Q;
        if(T == 0 && Q == 0){
            B
		}
        vi m(T);
        FOR(i,0,T){
           cin >> m[i];
        }
        sort(all(m));
        printf("CASE# %d:\n", C);
        while(Q--){
            int Choose;
            //scanf("%d", &Choose);
            cin >> Choose;
            int get = run(m,Choose);
            if(get==-1){
                 printf("%d not found\n", Choose);
            }
            else{
                printf("%d found at %d\n",Choose, get + 1);
            }
        }
        C++;
    }
    return 0;
}