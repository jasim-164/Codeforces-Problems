#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;

    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]>='A'&&s1[i]<='Z')
        {
            s1[i]=s1[i]+32;
        }
    }
    for(int i=0;i<s2.size();i++)
    {
        if(s2[i]>='A'&&s2[i]<='Z')
        {
            s2[i]=s2[i]+32;
        }
    }
    int res=s1.compare(s2);
    //cout<<"res"<<res<<endl;
    if(res==0)
    {
        cout<<"0";
    }
    else if(res<0)
    {
        cout<<"-1";
    }
    else{
        cout<<"1";
    }
}
