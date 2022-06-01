#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
    int sum=0,c=0;
    while(1)
    {
        sum++;
        if(sum<=n)
        {
            c++;
        }
        break;
    }
    retrun c;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;

        //int sum=0,count=0;
        /*for(int i=1;i<=n;i++)
        {
            sum+=i;
            if(sum<=n)
            {
                count++;
            }
        }*/
        cout<<f(n)<<endl;
    }
    return 0;
}

