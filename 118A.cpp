#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100],ch;
    cin>>s;
       for(int i=0;i<strlen(s);i++)
       {
        if(s[i]>=65&&s[i]<=90)
        {
            s[i]=97+s[i]-65;
            // cout<<s[i]<<endl;
        }
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y')

           {
            cout<<"."<<s[i];
           }

    }

    return 0;
}


