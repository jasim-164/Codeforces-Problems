#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[10],temp;
    for(int i=0;i<6;i++)
    {
        cin>>ara[i];
    }
    cin>>temp;
    for(int i=0;i<5;i++)
    {
        if(temp==ara[i])
        {
           ara[i]=ara[i++];
        }
    }
    for(int i=0;i<6;i++)
    {
        cout<<ara[i]<<endl;
    }


}
