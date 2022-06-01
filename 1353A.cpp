#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara1[31],ara2[31];
    int t,n,k,temp;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1;i<n;i++)
        {
            cin>>ara1[i];
            cin>>ara2[i];
        }
        sort(ara1,ara1+n);//ascending order
        sort(ara2,ara2+n,greater<int>());//descending order
        for(int i=1;i<k;i++)
        {   temp=ara1[i];
            ara1[i]=ara2[i];
            ara2[i]=temp;
        }
        cout<<endl;
        int sum=0;
        for(int i=1;i<n;i++)
        {
            cout<<ara1[i]<<endl;
        }
        cout<<sum<<endl;

    }
    return 0;
}
