#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n,k;
     cin>>n>>k;
     if(k>n)
            cout<<"NO"<<endl;
     else if(n==k)
     {
         cout<<"YES"<<endl;
         for(int i=1;i<=k;i++)
            cout<<1<<" ";
         cout<<endl;
     }
     else if(n%2==0 && (n-(k-1))%2!=0)
     {
         cout<<"YES"<<endl;
         for(int i=1;i<k;i++)
            cout<<"1"<<" ";
         cout<<n-(k-1)<<endl;
     }
     else if(n%2!=0 && k%2!=0)
     {
         cout<<"YES"<<endl;
        for(int i=1;i<k;i++)
        {
            cout<<"1"<<" ";
        }
        cout<<n-(k-1)<<endl;
     }
      else if(n%2==0 && n/k>1)
     {
         cout<<"YES"<<endl;
        for(int i=1;i<k;i++)
        {
            cout<<"2"<<" ";
        }
        cout<<n-(k-1)*2<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
     }
    }
    return 0;
}
