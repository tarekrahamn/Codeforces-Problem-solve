
#include <iostream>
using namespace std;

bool isMarvelousNumber(int n) {
    int digits[3];
    digits[0] = n / 100;
    digits[1] = (n / 10) % 10;
    digits[2] = n % 10;

    int sum = digits[0] + digits[1] + digits[2];
    int product = digits[0] * digits[1] * digits[2];
    if(product==0){
        return false;
    }
    if (digits[0] == digits[1] || digits[1] == digits[2]) {
        if (sum / product==0) {
            return true;
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       if (isMarvelousNumber(n)) {
            cout << "YES" << endl;
        } else {
             cout << "NO" << endl;
        }
    }
    return 0;
}
