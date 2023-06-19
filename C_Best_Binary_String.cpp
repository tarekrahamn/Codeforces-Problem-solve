#include <iostream>
#include <string>

using namespace std;

string getMinimumCostBinaryString(const string& s) {
    string binaryString = s;
    int n = binaryString.length();

    // Fill first index with 0 if it is '?'
    if (binaryString[0] == '?') {
        binaryString[0] = '0';
    }

    
    if (binaryString[n - 1] == '?') {
        binaryString[n - 1] = '1';
    }

    // Loop from index 1 to n - 2
    for (int i = 1; i < n - 1; i++) {
        // If the current index is '?' and the previous index is '1', fill 1, otherwise fill 0
        if (binaryString[i] == '?')
        if( binaryString[i - 1] == '1') {
            binaryString[i] = '1';
        } else {
            binaryString[i] = '0';
        }
    }

    return binaryString;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;

        string minimumCostBinaryString = getMinimumCostBinaryString(s);
        cout << minimumCostBinaryString << endl;
    }

    return 0;
}
