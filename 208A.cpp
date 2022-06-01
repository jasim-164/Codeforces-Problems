#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int t=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            i=i+2;
            if(t!=0)
            {
                cout<<" ";
            }
            t=0;
        }
        else
        {
            cout<<s[i];
            t++;
        }
    }
    cout<<endl;

    return 0;
}
