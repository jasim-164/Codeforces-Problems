#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    int n,sum1=0,sum2=0,sum3=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        sum1+=x;
        sum2+=y;
        sum3+=z;
    }
    if(sum1==0&&sum2==0&&sum3==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}