#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        if(n%2==0)
        {
           int B_even=0,B_odd=0;
            for(int i=0;i<n;i++ )
            {
                if((i+1)%2==0)
                {
                if((s[i]-'0')%2==0)
                {
                    cout<<2<<endl;
                    B_even=1;
                    break;
                }
                }
            }
            if(!B_even)
            {
                cout<<"1"<<endl;
            }
        }
        else
        {
             int R_even=0,R_odd=0;
            for(int i=0;i<n;i++ )
            {
                if((i+1)%2!=0)
                {
                if((s[i]-'0')%2!=0)
                {
                    cout<<1<<endl;
                    R_odd=1;
                    break;
                }
                }
            }
            if(!R_odd)
            {
                cout<<"2"<<endl;
            }
        }
    }
    return 0;
}
