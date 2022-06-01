#include<bits/stdc++.h>
using namespace std;
int main()
{    char s[200];
    cin>>s;
    int siz=strlen(s);
    int cnt=1;
    sort(s,s+siz);
    for(int i=0;i<siz-1;i++)
    {
            if(s[i]!=s[i+1])
            {
               cnt++;
            }
    }
    if(cnt&1)
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
}
