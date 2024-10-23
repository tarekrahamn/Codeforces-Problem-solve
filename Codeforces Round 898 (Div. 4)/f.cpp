#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), h(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        vector<int> preH(n + 1, 0);

        // preH[1] = 1;
        // for (int i = 2; i <= n; i++) {
        //     if (h[i - 1] % h[i - 2] == 0)
        //         preH[i] = preH[i - 1] + 1;
        //     else
        //         preH[i] = 1;
        // }
        preH[1]=1;
        for(int i=2;i<=n;i++){
            if(h[i-1]%h[i-2]==0) {
                preH[i]=preH[i-1]+1;
            }
            else{
                preH[i]=1;
            }
        }

        int maxLength = 0;

        for (int i = 0; i < n; i++) {
            int len = upper_bound(preH.begin(), preH.end(), preH[i] - k) - preH.begin();
            maxLength = max(maxLength, i - len + 1);
        }

        cout << maxLength << endl;
    }

    return 0;
}
