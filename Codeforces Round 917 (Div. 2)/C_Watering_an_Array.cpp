#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k,d;
    cin>>n>>k>>d;
    int a[n],b[k];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(int i=0;i<k;++i)
    {
        cin>>b[i];
    }
    int ans=0;
    for(int i=1;i<=min<int>(2*n,d);++i)
    {
        int eq=0;
        for(int j=0;j<n;++j)
        {
            eq+=(a[j]==j+1);
        }
        ans=max<int>(ans,eq+(d-i)/2);//d-i is the number of times we can use the second operation and we can use it twice in one operation so we divide it by 2 and add it to eq to get the total number of equal elements in the array after i operations and then we take the maximum of all these values to get the maximum number of equal elements in the array after d operations and then we print it as the answer.
        for(int j=0;j<b[(i-1)%k];++j)
        {
            a[j]++;
        }
    }
    cout<<ans<<"\n";
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}