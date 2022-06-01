#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ara[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        int odd=0,even=0;
         for(int i=0;i<n;i++)
         {
             if(ara[i]%2 != i%2)
             {
                 if(i%2==0)
                 {
                     even++;
                 }
                 else
                 {
                     odd++;
                 }
             }
         }
         if(even==odd)
         {
             cout<<even<<endl;
         }
         else
         {
             cout<< "-1"<<endl;
         }

       }
    return 0;
}
