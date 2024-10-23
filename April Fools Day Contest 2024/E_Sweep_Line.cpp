#include <iostream>
#include <vector>
using namespace std;

const int MOD = 20240401;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    
    int count = 0;
    for (int i = 1; i < n - 1; ++i) {
        if (a[i] == 1) {
            int left_zeros = 0, right_twos = 0;
            for (int j = 0; j < i; ++j)
                if (a[j] == 0)
                    ++left_zeros;
            for (int j = i + 1; j < n; ++j)
                if (a[j] == 2)
                    ++right_twos;
            count = (count + (left_zeros * right_twos) % MOD) % MOD;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
