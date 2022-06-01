#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,c;
    cin>>t;
    int cnt1=0,cnt2=0;
    while(t--)
    {
        cin>>m>>c;

        if(m>c)
        {
            cnt1++;
        }
        else if(c>m)
        {
            cnt2++;
        }
    }
    if(cnt1==cnt2)
    {
        cout<< "Friendship is magic!^^" <<endl;
    }
    else if(cnt1>cnt2)
    {
        cout<<"Mishka"<<endl;
    }
    else
    {

        cout<<"Chris"<<endl;
    }
}

