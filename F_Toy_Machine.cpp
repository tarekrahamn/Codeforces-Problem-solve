// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, k;
//     cin >> n >> k;

//     // Move k-th toy to the leftmost cell of the bottom row
//     cout << "R";
//     int col = (k-1)%(n-2)+2; // column of k-th toy in the bottom row
//     int row = (k-1)/(n-2)+1; // row of k-th toy in the bottom row
//     if (row == 1) {
//         cout << "D";
//         row = 2;
//     }
//     while (col != 1) {
//         cout << "L";
//         col--;
//         if (col != 1) {
//             cout << "D";
//             row = 3 - row;
//         }
//     }
//     cout << "U";

//     // Move all the toys to the top row
//     for (int i = 1; i <= n-2; i++) {
//         if (i == k) continue; // k-th toy is already in the top row
//         int c = (i-1)%(n-2)+2; // column of i-th toy in the bottom row
//         int r = (i-1)/(n-2)+1; // row of i-th toy in the bottom row
//         if (r == 1) {
//             cout << "D";
//             r = 2;
//         }
//         if (c == n-1 && r == 2) { // i-th toy is already in the leftmost cell of the top row
//             continue;
//         }
//         if (r == 2) {
//             cout << "D";
//             r = 3 - r;
//         }
//         while (c != n-1) {
//             cout << "R";
//             c++;
//             if (c != n-1) {
//                 cout << "D";
//                 r = 3 - r;
//             }
//         }
//         while (c != 1) {
//             cout << "L";
//             c--;
//             if (c != 1) {
//                 cout << "D";
//                 r = 3 - r;
//             }
//         }
//         cout << "U";
//     }

//     return 0;
// }
#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N=2500007;
const int mod=1e9+7;
int n,k;


signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin>>n>>k;
	if (k<n/2){
		for (int i=1;i<k;++i) cout<<"LDRU";
		cout<<"L";
		return 0;
	} 
	if (k==n/2){
		cout<<"DL";
		return 0;
	}
	int ret=n-2-k;
	cerr<<ret<<endl;
	for (int i=1;i<=ret;++i) cout<<"RDLU";
	for (int i=1;i<=n;++i) cout<<"RDRU";
	cout<<"LUL";
	for (int i=1;i<=n/2-1;++i) cout<<"LDRU";
	cout<<"L";
}

/*
LDRU loop k<=n/2
RDRU loop + LUL
*/