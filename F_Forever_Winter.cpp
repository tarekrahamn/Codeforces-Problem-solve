/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** Author:  tarek200 *************************\\
**************** Created: 07.05.2023 ************************\\
**/
#include <bits/stdc++.h>
#define   Tarek           ios::sync_with_stdio(false);cin.tie(0);
#define   ll              long long int
#define   ull             unsigned long long int
#define   ld              long double
#define   test            int t;cin >> t;while(t--)
#define   push            push_back
#define   pop             pop_back
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   si(x)           scanf("%lld",&x);
#define   si2(x,y)        scanf("%lld%lld",&x,&y);
#define   exit            return ;
#define   next            continue;
#define   B               break;
#define   nl              "\n"
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   mod             1000000007
#define   PI              3.14159265358979323846
#define   srt(dp)         sort(dp.begin(), dp.end());
#define   FOREACH(it, l)  for (auto it = l.begin(); it != l.end(); it++)
#define   FOR(n)          for(int i=1;i<=n;i++)
#define   LOOP1(m)        for(int i=0;i<m;i++)
const int N               = (int) 1e6+5;
const int M               = (int) 1e9+5;
using namespace std;
/*
In this problem we need to calculate the minimum number of edge that need to remove the grph
and make a tree. also calculate minimum nuber of laves that resulting tree have 
my approch is based on the degree of the vertices on the graph
lets start
*/
int main(){
    Tarek
    test{
        int n,m;//represent the number of vertices
        cin >> n >> m;
        int  sum = 0;
        int dp[n+1]={0};//
        LOOP1(m){
            int x,y;// represent the two vertiices that connected by an edge
            cin >> x>> y;
            //keep track each degree of the vertices
            dp[x]++;
            dp[y]++;
        }
        FOR(n){
            //when array is 1 then it count the number of leaf node of the graph
            if(dp[i]==1){
                sum++;
            }
        }
        cout << m -sum <<' ';//Calculate minimum number of edge that need to remove the graph and make tree
        cout << sum/(m-sum) <<endl;//minimum number of leaves a tree have
    }
    return 0;
}