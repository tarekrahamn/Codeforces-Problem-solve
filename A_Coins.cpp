#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// Let's implement Extended Eucliden Algorithm to find GCD (2,K)=2a+kb
// this algorithm find GCD 2 and user input .lets go
void Extended_Eucliden_Algorithm(ll a, ll b, ll &x,ll &y , ll &GCD){
    if(b==0){// main function for Algorithm
        x = 1;
        y = 0;
        GCD = a;
        return;
    }
    // Using Recursion 
    Extended_Eucliden_Algorithm(b,a%b,x,y,GCD);
    // Extended_Eucliden_Algorithm implement Done
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll x,y, GCD;
        // We  find GCD 2 and K
        Extended_Eucliden_Algorithm(2,k,x,y,GCD);
        //Impelement for codeforces Problem solve
        if(n%GCD==0){
            cout << "YES" << endl;
        }else{
            cout << " NO" << endl ;
        }
    }
    return 0;
}
/*lets see some manul traching 
7 4
gcd(7, 4) = gcd(4, 7 % 4) = gcd(4, 3)
gcd(4, 3) = gcd(3, 4 % 3) = gcd(3, 1)
gcd(3, 1) = gcd(1, 3 % 1) = gcd(1, 0)
 final Gcd is 1 because b = 0;when b is 0 then its give 
 us final GCD,but its wrong becuse we to find GCD 2 to k
 so we find it 2 3
 
gcd(2, 3) = gcd(3, 2) = gcd(2, 3 % 2) = gcd(2, 1)
gcd(2, 1) = gcd(1, 2 % 1) = gcd(1, 0)
our final GCD is 1
 2 4
 gcd(2, 4) = gcd(4, 2) = gcd(2, 4 % 2) = gcd(2, 0)
 final gcd is 2 */



