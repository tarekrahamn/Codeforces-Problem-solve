#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define Yes cout<<"Yes"<<"\n";
#define No  cout<<"No"<<"\n"; 
void run(int t){
    double x;
    cin >> x;
    double answer = sqrt(x * x + 1) - x;
    cout << std::fixed << setprecision(3) << answer <<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin >> t;
    int c  = 1;
    while(t--){
        //cout << "Case " << c++ << ": ";
        run(t);
    }
    return 0;
}