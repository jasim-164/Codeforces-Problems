#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int l=0,i,j;
    int d=s.size();

    for(i=1;i<d;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            l++;
        }
    }
    if(l==d-1)
    {
        for(i=0;i<d;i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i]=s[i]+32;
            }
            else if(s[i]>=97 && s[i]<=122)
            {
                s[i]=s[i]-32;
            }
        }
    }
   cout<<s<<endl;
    return 0;
}
