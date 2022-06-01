#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;//10101011011
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int pos=0,pos1=0;
        int t1=0,t2=0;
        //find adjacent 1 value
        //find adjacent 0 value
        for(int i=0; i<n-1; i++)
        {
            if(s[i]=='1' && s[i+1]=='1')
            {
                t1=1;
                pos1=i;
                break;
            }

        }
        for(int i=0; i<n-1; i++)
        {
            if(s[i]=='0' && s[i+1]=='0' )
            {
                t2=1;
                pos=i;
            }

        }
        if(is_sorted(s.begin(),s.end()))     //110011
        {
            cout<<"YES"<<endl;
        }
        else if(t1==1 && t2==1 && pos>pos1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
