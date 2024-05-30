#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string password;
        cin >> password;
        bool valid = true;
        for (int i = 0; i < n - 1; i++) {
            if (isdigit(password[i]) && isalpha(password[i + 1])) {
                valid = false;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
    return 0;
}
