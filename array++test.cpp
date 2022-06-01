#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int siz=s.size();
    int l=0,h=siz;
    while(h>l)
    {
        if(s[l++]!=s[h--])
        {
            cout<<s[l++]<<" "<<s[h--]<<endl;
        }
    }
}
