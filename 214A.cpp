#include<iostream>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int count=0;
for(int i=0;i<=100;i++)
{
    for(int j=0;j<=100;j++)
    {
        if((i*i+j==n) && (i+j*j==m))
        {
            //cout<<"i="<<i<<"j="<<j<<endl;
            count++;
        }
    }
}
    cout<<count<<endl;



return 0;}
