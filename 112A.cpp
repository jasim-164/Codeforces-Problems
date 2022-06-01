#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{char s[100],t[100];

    cin>>s;
    cin>>t;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==t[i])
        {
            cout<<"0";
        }
    }

    return 0;}

