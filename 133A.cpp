#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int t=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {

            t=1;
            break;
        }
        else
        {
            t=0;
        }
    }
    if(t==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
