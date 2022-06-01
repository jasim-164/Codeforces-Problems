#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,val;
    cin>>n;
    val=n;
    int test=-1;
    if(val%4==0||val%7==0||val%47==0||val%74==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
           while(n>=1)
    {
        int r=n%10;
        n=n/10;
        if(r==4||r==7)
        {
            test=1;
        }
        else
        {
            test=0;
            break;
        }
    }
    }
    if(test==0)
        cout<<"NO"<<endl;
    if(test==1)
        cout<<"YES"<<endl;
    return 0;
}
