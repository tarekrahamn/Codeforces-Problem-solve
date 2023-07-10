/*
########## Starting with the name of almighty ALLAH #######################
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ ***********
**************** Author:  tarek200 *************************
**************** Created: 23.05.2023 ***********************
$$$$$$$$$$ Practice is the only shortcut to improve $$$$$$$$$$$$$$$$$$$$$$$$
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
#define   push            push_back
#define   pop             pop_back
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
#define   rev(dp)         reverse(dp.begin(), dp.end());
#define   FOREACH(it, l)  for (auto it = l.begin(); it != l.end(); it++)
#define   cinv(v)         for(auto &it:v)cin>>it;
#define   FOR(i,a,b)      for(ll i=a;i<b;i++)
#define   LOOP(i,a,b)     for(ll j=a;j<b;j++)
#define   LOOP2(i,a,b)    for(ll k=a;k<=b;k++)
const long long int N     = (ll) 1e7+1;
const long long int M     = (ll) 1e9+5;
using namespace std;
/*
In ths problem our task is there was give 1 to n friends.and give some pair that means there was some friend
dose not have friendship whith them.now need to say how manay subsegment we build that there was no unfried 
ferson in same subsagment .
like N=6 and dose't frient 2 
(3,5)and (3,6) they are not friend 

1 2 3 4 5 6
now i need to say how many segment we make .without 
3 4 5 and 3 4 5 6

Now what is subsegment 
1 2 3 4 5 6 the subsegment is some part of array
such as  1 2 , 5 6 and  2 3

now some manul input :
n = 3 and m = 2 (2,3)they are not friends
1 2 3
there was 4 good pairs that is  1 , 2  , 3 and 1 2
lest impelement this 
*/
void run(){
    ll n,m;
    cin >> n >> m;
    vll a(n+10);
    // Unfried person
    FOR(i,0,m){
        ll p , q;
        cin >> p >> q;
        /*
        there was a problem
        1 2 3 4 5 6 and unfriend peope are (3,6) and (4,6)
        at this thime need closest max number of 6
        */
        if(p>q){
            swap(p,q);
            // a[q]=max(a[q],p);
        }
        a[q]=max(a[q],p);
    }
    // how many segment we can make
    ll x =1;
    ll ans = 0;
    LOOP2(k,1,n){
        x =max(x,(ll)a[k]+1LL);
        ans +=(k-x+1);
    }
    cout << ans << nl;
}
int main(){
    Tarek
    test{
        run();
    }
}