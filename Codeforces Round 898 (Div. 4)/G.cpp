#include <iostream>
#include <string>

using namespace std;

int maxCoins(string s) {
    int coins = 0;
    int n = s.length();
    
    // Iterate through the string and look for "AB" and "BA" substrings
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'A' && s[i + 1] == 'B') {
            coins++;
            s[i] = 'B';
            s[i + 1] = 'C';
        } else if (s[i] == 'B' && s[i + 1] == 'A') {
            coins++;
            s[i] = 'C';
            s[i + 1] = 'B';
        }
    }
    
    return coins;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int result = maxCoins(s);
        cout << result << endl;
    }

    return 0;
}
