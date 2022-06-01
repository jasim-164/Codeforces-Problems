#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int cnt=0;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
           cnt++;
        }

    }
       if(cnt>=2)
        {
            cout<<"NO";
        }
        else if(cnt==1)
        {
            cout<<"YES";
        }
       else if(cnt==0&& n%2!=0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    return 0;
}
