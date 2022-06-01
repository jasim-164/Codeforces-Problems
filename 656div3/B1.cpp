#include<bits/stdc++.h>
using namespace std;
void duplicate(int *a,int max_)
{
    for(int i=1; i<=max_; ++i)
        for(int j=i+1; j<=max_;)
        {
            if(a[i]==a[j])
            {
                for(int k=j; k<=max_-1; ++k)
                    a[k]=a[k+1];

                --max_;
            }
            else
                ++j;
        }

    for(int i=1; i<=max_; ++i)
        cout<<a[i]<<" ";
    return ;
}

int main()
{
    int n,a[1000],t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=2*n; i++)
        {
            cin>>a[i];
        }
        int size_=2*n;
        duplicate(a,size_);
    }


    return 0;
}
