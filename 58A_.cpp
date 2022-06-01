#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string s1="hello";
    cin>>s;
    int siz=s.size();
    int j=0,count=0;
    for(int i=0;i<siz;i++)
    {
        if(s1[j]==s[i])
        {
            count++;
            j++;
        }
    }
    if(count==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
