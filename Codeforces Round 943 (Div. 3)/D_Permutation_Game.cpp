#include <iostream>
#include <vector>
#include <map>
#include <chrono>
using namespace std;
using namespace chrono;

#define int long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define sz size()
#define nl '\n'

// Function to find cycle in permutation starting from 'start'
vector<int> findCycle(int start, const vector<int>& perm) {
    vector<int> cycle;
    map<int, int> visited;
    int current = start;
    visited[start]++;

    while(true) {
        int next = perm[current];
        if(visited[next] > 0) {
            break;
        }
        cycle.push_back(next);
        current = next;
        visited[next]++;
    }

    return cycle;
}

// Function to calculate maximum score for a given cycle and k moves
int calculateMaxScore(const vector<int>& cycle, const vector<int>& a, int k) {
    int maxScore = 0;
    int currentSum = 0;

    for(int i = 0; i < cycle.size(); i++) {
        if(k < i + 1) {
            break;
        }
        int movesLeft = k - i;
        int currentVal = currentSum + movesLeft * a[cycle[i]];
        maxScore = max(maxScore, currentVal);
        currentSum += a[cycle[i]];
    }

    return maxScore;
}

void solve() {
    int n, k;
    cin >> n >> k;
    int p1, p2;
    cin >> p1 >> p2;

    vector<int> perm(n + 2, 0);
    vector<int> a(n + 2, 0);

    for(int i = 1; i <= n; i++) {
        cin >> perm[i];
    }

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int s1 = a[p1];
    int s2 = a[p2];

    vector<int> pos1 = findCycle(p1, perm);
    vector<int> pos2 = findCycle(p2, perm);

    s1 = calculateMaxScore(pos1, a, k);
    s2 = calculateMaxScore(pos2, a, k);

    if(s1 == s2) {
        cout << "Draw" << nl;
    } else if(s1 > s2) {
        cout << "Bodya" << nl;
    } else {
        cout << "Sasha" << nl;
    }
}

int32_t main() {
    fastio();
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
