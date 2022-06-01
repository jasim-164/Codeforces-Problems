#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define max_=50
#define ara[max_]
void delet(int i,int size)
{
    for(int i=0;i<size;i++)
    {
        ara[i]=ara[i++];
    }
    size--;
}
int main()
{
    string s;
    cin>>s;
    int p=s.size();
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==1&&s[i++]==0)
        {
            delet(i,p);
        }
    }
    return 0;
}

