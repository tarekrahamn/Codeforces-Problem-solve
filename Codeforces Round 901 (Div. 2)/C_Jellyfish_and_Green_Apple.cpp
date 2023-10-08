#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, int> mp;
    vector<int> v;
    bool flag = true;
    int numerator, denominator, g, x = 0, ans = 0, om;

    while (x != mp.end()) {
        numerator = x->second;
        denominator = x->first;
        v.push_back(denominator);

        if (numerator == 1)
            break;

        numerator--;
        g = gcd(numerator, denominator);
        numerator /= g;
        denominator /= g;

        if (g == 1 || (denominator & (denominator - 1))) {
            flag = false;
            break;
        }

        mp[denominator] = numerator;
        x++;

        if (!flag) {
            cout << "-1\n";
            continue;
        }
    }

    ans = 0;
    for (int i = 0; i < v.size(); i++) {
        ans += (v[i] - 1) * om / v[i];
    }

    cout << ans << "\n";

    return 0;
}
