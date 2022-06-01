#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int k=1;
        for(int i=1;i<a;i++)
        {
            k*=10;
        }
        int l=1;
         for(int i=1;i<b;i++)
        {
            l*=10;
        }
       int  m=1;
           for(int i=1;i<c;i++)
        {
            m*=10;
        }
        cout<<k<< " "<<l+m<<endl;
    }
}
