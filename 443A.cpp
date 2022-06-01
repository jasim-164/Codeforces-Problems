#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    map<char,int>m;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            m[s[i]]++;
        }
    }
    int cnt=0;
    for(auto itr: m)
    {
        if(itr.second>=1)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
