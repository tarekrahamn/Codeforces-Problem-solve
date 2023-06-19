#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int k;
    cin >> k;

    int maxLength = 0;

    // Check all possible lengths of tandem repeats
    for (int l = 1; l <= s.length(); l++) {
        // Check if a tandem repeat of length l can be formed
        if (s.substr(0, l) == s.substr(s.length() - l, l)) {
            // Calculate the maximum length of the tandem repeat
            int repeatLength = l + k;

            // Update the maximum length if necessary
            maxLength = max(maxLength, repeatLength);
        }
    }

    cout << maxLength << endl;

    return 0;
}
