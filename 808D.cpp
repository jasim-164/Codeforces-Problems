#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int n;
    cin>>n;
    lli ara[n+1];
    lli sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    if(sum&1)
    {
        cout<<"NO"<<endl;
        return 0;
    }
 map<lli,lli>mp1,mp2;
    //create two set
     mp1[ara[0]]=1;
     for(int i=1;i<n;i++)
    {
        mp2[ara[i]]++;
    }
    lli s=0;
     for(int i=0;i<n;i++)
    {
       s+=ara[i];//binary check
       if(s==(sum/2))
       {
           cout<<"YES"<<endl;
           return 0;
       }
       else if(s<sum/2)
       {
           lli x=sum/2-s;
           if(mp2[x]>0)
           {
            cout<<"YES"<<endl;
            return 0;
           }
       }
       else
       {
           lli x=abs(sum/2-s);
           if(mp1[x]>0)
           {
            cout<<"YES"<<endl;
            return 0;
           }
       }
       mp1[ara[i+1]]++;
       mp2[ara[i+1]]--;
    }
    cout<<"NO"<<"\n";

    return 0;
}
