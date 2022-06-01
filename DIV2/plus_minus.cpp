#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    int t;

    cin>>t;
    while(t--)

    {
        int res=0;
        cin>>s;
        for(int init =0;init<1000001;init++)
        {
            int cur=init;
            bool ok=true;
            for(int i=0; i<s.size(); i++)
            {
                res++;
                if(s[i]=='+')
                {
                    cur=cur+1;
                }
                else
                {
                    cur=cur-1;
                }
                if(cur<0)
                {
                    ok=false;
                    break;
                }
            }
            if(ok)
            {
                break;
            }
        }

        cout<<res<<endl;
    }
    return 0;
}
