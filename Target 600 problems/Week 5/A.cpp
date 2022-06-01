#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n>>c;
    int ara[n+1];
    for(int i=0;i<n;i++)
        cin>>ara[i];
     int d=0;
     for(int i=0;i<n;i++)
     {
         if((ara[i]-ara[i+1])>d)
            d=ara[i]-ara[i+1];
     }
     if(d-c>0)
     {
         cout<<d-c<<endl;
     }
     else
     {
         cout<<"0"<<endl;
     }

    return 0;
}
