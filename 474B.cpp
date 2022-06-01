#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
        a[i]=a[i-1]+a[i];
    int m;
    cin>>m;
    int b[m+1];
    for(int k=0;k<m;k++)
    {
    cin>>b[k];
    int i=0,j=n-1;
    while(i<j)
    {
        int mid=(i+j)/2;
        if(i==j-1)
        {
           if(b[k]<=a[i])
           {
               cout<<i+1<<endl;
               break;
           }
           else
           {
               cout<<j+1<<endl;
               break;
           }

        }
        else{

        if(a[mid]==b[k])
        {
            cout<<mid+1<<endl;
            break;
        }
        else if(a[mid]>b[k])
        {
             j=mid;
        }
        else if(a[mid]<b[k])
        {
            i=mid;
        }

        }

    }
    }
    return 0;
}
