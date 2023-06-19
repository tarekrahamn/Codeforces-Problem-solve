/*
Problem Link :
https://codeforces.com/contest/1840/problem/D 
**/
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#define   Tarek           ios::sync_with_stdio(false);cin.tie(0);
#define   ll              long long int
#define   ull             unsigned long long int
#define   ld              long double
#define   vi              vector<int>
#define   vll             vector<ll>
#define   vc              vector<char>
#define   vs              vector<string>
#define   test            ll t;cin >> t;while(t--)
#define   pb            push_back
#define   pp             pop_back
#define   sz              size()
#define   ff              first
#define   ss              second
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   exit            return ;
#define   next            continue;
#define   B               break;
#define  checkmate        return 0;
#define   nl              "\n"
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   mod             1000000007
#define   PI              3.14159265358979323846
#define   all(x)         (x).begin(), (x).end()
#define   des(x)         (x).rbegin(), (x).rend()
#define   FOREACH(it, l)  for (auto it = l.begin(); it != l.end(); it++)
#define   cinv(v)         for(auto &it:v)cin>>it;
#define   FOR(i,a,b)      for(ll i=a;i<b;i++)
#define   LOOP(i,a,b)     for(ll j=a;j<b;j++)
#define   LOOP2(i,a,b)    for(ll i=a;i<=b;i++)
#define   ROF(i, a, b)    for (ll i = a; i >b; i--)
const long long int N     = (ll) 1e7+1;
const long long int M     = (ll) 1e9+5;
using namespace std;
const ull MOD = 1000003;
int bina(int x, vector<int>& a) {
    int count = 0;
    int min=0;
    FOR(i,1,a.sz) {
        if (((a[i] - a[min] + 1) / 2) > x) {
            min = i;
            count++;
        }
    }
    return count< 3;
}
int main() {
    Tarek
    test{
        int n;
        cin >> n;
        vector<int> a(n);
        cinv(a);
        sort(all(a));
        int low = 0;
        int high = 1e9;
        int ans = 1e9;
        while (low <= high) {
            int mid = (low + high) >>1;
            if (bina(mid, a)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
