#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v;
        int len=0,zero=0;
        int p=n;
        while(p!=0)
        {
            int r=p%10;
            v.push_back(r);
            p/=10;
            if(r==0)
                zero++;
                len++;
        }
        if(zero==len-1)
        {
            cout<<1<<endl;
            cout<<n<<endl;
        }
        else
        {
            int l=len;
            cout<<len-zero<<endl;
            for(int i=0;i<len;i++)
            {
                l--;
                if(v[len-i-1]!=0)
                {
                    cout<<v[len-i-1];
                for(int j=0;j<l;j++ )
                {
                   cout<<"0";
                }
                cout<<endl;

                }
            }
        }
    }
    return 0;
}
