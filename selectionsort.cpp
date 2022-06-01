#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    cout<<"before selection sort"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ara[i]<<" ";
    }
    for(int i=0;i<n-1;i++)
    {int min_=i;
        for(int j=i+1;j<n;j++)
        {
            if(ara[j]<ara[min_])
            {
                min_=j;
            }
        }
        swap(ara[min_],ara[i]);
    }
     cout<<"after selection sort"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ara[i]<<" ";
    }

}
