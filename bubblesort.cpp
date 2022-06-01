#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[20],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    int temp=0,flag;
    for(int k=0;k<n;k++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(ara[j]>ara[j++])
            {
                temp=ara[j];
                ara[j]=ara[j++];
                ara[j++]=temp;
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
     for(int i=0;i<n;i++)
    {
        cout<<ara[i];
    }
    return 0;
}
