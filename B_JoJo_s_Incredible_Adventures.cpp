#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define loop(n) for(long long i=0;i<n;i++)
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        string s;
       cin >> s;

        ll n=s.size();
        ll cnt=0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='1')cnt++;
        }

        if(cnt==n)
            printf("%lld\n", n*n);
        else {
            ll cmt=0,p=0,i=0;cnt=0;
            while(1){
                if(s[i%n]=='1')cnt++;
                else {
                    cmt=cmt>cnt?cmt:cnt;
                    cnt=0;
                }
                cmt=cmt>cnt?cmt:cnt;
                i++;p++;
                if(p>=n&&s[i%n]=='0')break;
            }
            cmt=cmt>cnt?cmt:cnt;
            printf("%lld\n", ((cmt+1)*(cmt+1))/4);
        }
    }
    return 0;
}
