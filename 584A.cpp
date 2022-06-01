#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    char a[n+1];
    char c=48+t;
    for(int i=0; i<n; i++)
    {
        a[i]=c;
    }
    if(n==1 && t==10)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    else
    {
        if(t==10)
        {
            for(int i=0; i<n-1; i++)
            {
                a[i]='1';
            }
            a[n-1]='0';
        }

        for(int i=0; i<n; i++)
        {
            cout<<a[i];
        }
        cout<<endl;
    }

    return 0;
}
