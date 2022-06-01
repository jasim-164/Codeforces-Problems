#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,d,rslt;
    cin>>n>>d;
    if(n%2==0)
    {
        if(n/2>=d)
        {
             rslt=2*d-1;
            cout<<rslt<<endl;
        }
        else
        {
            rslt=fabs((n/2)-d)*2;
            cout<<rslt<<endl;
        }
    }
    else
    {
        if((n/2)+1>=d)
        {
            rslt=2*d-1;
            cout<<rslt<<endl;
        }
        else{
            rslt=fabs((n/2)+1-d)*2;
            cout<<rslt<<endl;
        }

    }
    return 0;
}
