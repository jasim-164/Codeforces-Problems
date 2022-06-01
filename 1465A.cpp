#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        int count=0,test=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==')')
            {
                ++count;
                test=1;
            }
                else
                {
                    test=0;
                    break;
                }
        }
        if(test==1)
        {
          cout<<"YES"<<endl;
        }
        else if(count>abs(count-n))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return  0;
}
