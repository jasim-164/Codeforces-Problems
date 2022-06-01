#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int a,b,rslt;
       cin>>a>>b;
       if( b==1)
       {
           cout<<"NO"<<endl;
           continue;
       }
       else
       cout<<"YES"<<endl;

       rslt=a*b;
       if(rslt-a==a){
        rslt=rslt*2;

        cout<<a<<" "<<rslt-a<<" "<<rslt<<endl;
       }
       else
       {
           cout<<a<<" "<<rslt-a<<" "<<rslt<<endl;
       }
    }
    return 0;
}

