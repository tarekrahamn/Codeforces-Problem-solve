#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int c,k;
        cin>>c>>k;
        vector<int>a(c);
        for(int i=0;i<c;i++)
        {
            cin>>a[i];
        }
        int ct=0;
        int m=0;
        for(int j=0;j<c;j++)
        {
            if(a[j]==k)
            {
                ct++;
            }
            else
            {
                ct=0;
            }
            m=max(m,ct);
           
        }   

         if(m>0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
    }
    
    return 0;
}
