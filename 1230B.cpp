#include<bits/stdc++.h>
using namespace std;
int main()
{
        int k,n;
        string s;
        cin>>n>>k;
        cin>>s;
        if(n==1 && k>=1)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int cnt=0;
            for(int i=0; i<n; i++)
            {
                if(k==cnt)
                break;
                if(s[0]>'1' && k>0)
                {
                    s[0]='1';
                    cnt++;
                }
                if(s[i]>'0' && i>0)
                {
                    s[i]='0';
                    cnt++;
                }
            }
            cout<<s<<endl;
        }
    return 0;
}
