#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        int ara[n+1],t=1;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]>d)
            {
                t=0;
            }

        }
        if(t==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            sort(ara,ara+n);
            int p=0;
            for(int i=n-1;i>=0;i--)
            {
                if(ara[i]>d)
                {
                    ara[i]=ara[0]+ara[1];
                    if(ara[i]>d)
                    {
                        //cout<<"NO"<<endl;
                        p=0;
                        break;
                    }
                    else
                    {
                        p=1;
                    }
                }
                else
                {
                    break;
                }
            }
            if(p==0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;

            }
        }
    }

    return 0;
}
