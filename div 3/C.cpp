#include<iostream>
#include<bits/stdc++.h>
//#include<string>
using namespace std;
int main()
{
    string s;
    int t,n;
    cin>>t;
    while(t--)
    {
        int count=0,bracket=0;
        cin>>n;
        cin>>s;
        for(int i=0; i<n; i++)
        {

            if(s[i]=='(')
            {
                bracket++;
            }
            else
            {
                bracket--;
            }
            if(bracket<0)
            {
                bracket=0;
                count++;
            }

        }
        cout<<count<<endl;
    }
    return 0;
}

