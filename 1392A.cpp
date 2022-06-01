#include<bits/stdc++.h>
using namespace std;
 void password(int *ara,int n)
 {    int c=n;
       for(int i=1;i<=n;i++)
       {
           if(ara[i]!=ara[i+1])
           {
               int sum=ara[i]+ara[i+1];
               ara[i]=sum;
               c--;
           }
       }
       cout<<c;
 }
int main()
{
    int n,t;
    //vector<int>v;
    int ara[10000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>ara[i];
        }
        password(ara,n);

    }

    return 0;
}
