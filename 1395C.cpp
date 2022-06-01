#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[500],b[400],c[300];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
        cin>>b[i];
        int j=0;
    for(int i=0;i<n;i++)
    {

        if(j==m-1)
        {
            j=0;
        }
        else
        {
            c[i]=a[i]*b[j];
            j++;
        }
        cout<<c[i]<<endl;
    }
  /*  int sum =0;
    for(int i=0;i<n;i++)
    {
        sum=sum|c[i];
    }
    cout<<sum<<endl;*/


    return 0;
}
