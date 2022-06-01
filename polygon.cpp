#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,t,i;


        cin>>t;
         for(i=0;i<t;i++)
    {
        cin>>a;
        if((a%4)==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

