#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    int max=1,count=1;
    for(int i=0;i<n-1;i++)
    {
        if(ara[i]<=ara[i+1])
        {
            count++;
        }
        else
        {
            count=1;
        }
           if(max<count)
        {
            max=count;
        }
    }
        cout<<max<<endl;



    return 0;
}
