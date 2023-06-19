/*
########## Starting with the name of almighty ALLAH #######################
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ ***********
**************** Author:  tarek200 *************************
**************** Created: 14.05.2023 ***********************
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
 i solve this this problem but i will try it another way with binaray search lets try
 for this problem the task is count the number of ways to reorderd the distinct element of
 array a of length n ,like a_i > b_i for all i<=n .given a another array b length of n
 the output should give mudulo  mudulo 10^9+7 and number of ways to find reordeer the array 
 a ; 
*/
void run(){
    ll n;
    cin >> n;
    vll a(n),b(n);// the array
    cinv(a)//v taking input 
    cinv(b)
    // we need to sort the array for ascending order
    sort(all(a));
    vll store;// store the ans
    // we need to creat a loop 0 to n 
    FOR(i,0,n){
        ll binary = a.end()-upper_bound(all(a),b[i]);
        //the upper_bound function to find the first element int a array that is 
        // gretar than the current element in the array B . then it subtracts the index of that 
        // element from the end of the array A.
        store.push(binary); // count array A
    }
    // we sort STORE array for asending order 
    sort(all(store));
    ll ans = 1;
    // final loop 0 to n for the answer
    FOR(i,0,n){
        ll count = store[i]-i;
        ans =(ans*count)%mod;
    }
    /*the loop calculate  multiplying the difference between store[i] and 
     i. for all i  from 0 to n.and this result store ans 
     */
    // finally we print the answerr
    cout << ans << nl;
}
 
int main(){
   Tarek
   test{
    run();
   }
   checkmate
}