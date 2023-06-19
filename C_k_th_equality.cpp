#include <bits/stdc++.h>
#include<vector>
#include<set>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// Function to convert a number to a string
string toString(int num) {
    return to_string(num);
}

// Function to check if a + b = c is a valid equality
bool isValidEquality(int a, int b, int c, int A, int B, int C) {
    return (a < pow(10, A) && b < pow(10, B) && c < pow(10, C) && a + b == c);
}

// Function to generate all valid equalities given A, B, C
vector<string> generateEqualities(int A, int B, int C) {
    vector<string> equalities;

    for (int a = 1; a < pow(10, A); a++) {
        for (int b = 1; b < pow(10, B); b++) {
            int c = a + b;
            if (isValidEquality(a, b, c, A, B, C)) {
                string equality = toString(a) + " + " + toString(b) + " = " + toString(c);
                equalities.push_back(equality);
            }
        }
    }

    return equalities;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int A, B, C, k;
        cin >> A >> B >> C >> k;

        vector<string> equalities = generateEqualities(A, B, C);
        if (k > equalities.size()) {
            cout << -1 << endl;
        } else {
            cout << equalities[k - 1] << endl;
        }
    }

    return 0;
}
