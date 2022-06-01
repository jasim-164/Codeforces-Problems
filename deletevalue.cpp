#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
        for(int i=1;i<=n-1;i++)
        {
            if(a[i]==5)
            {
                a[i]=a[i++];
                n--;
            }
        }
        for(int i=1;i<=n;i++)
            cout<<a[i]<<" ";


}
