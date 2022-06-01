#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,n;
   char s[100];
   cin>>t;
   while(t--)
   {
       cin>>n;
       for(int i=1;i<=2*n-1;i++)
       {
           cin>>s[i];
       }
       for(int i=n;i<=2*n-1;i++)
       {
           cout<<s[i];
       }
       cout<<endl;
   }


    return 0;
}
