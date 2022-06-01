#include<iostream>
using namespace std;
int main()
{
    long long int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a<c)
        {
            cout<<1<<" ";
        }
        else
        {
            cout<<-1<<" ";
        }
        if(a*b>c)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
