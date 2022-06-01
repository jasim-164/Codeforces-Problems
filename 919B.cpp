#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define inf 999999
int perfectnumber(int n)
{int sum=0;
           while(n>0)
    {
        int r=n%10;
        sum=sum+r;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n=18,k,sum=0,count=0,ans;
    cin>>k;
    while(k)
    {//cout<<k<<endl;
        n++;
    if(perfectnumber(n)==10)
    {
        ans=n;
      k--;
    }
    }
    cout<<ans<<endl;

}
