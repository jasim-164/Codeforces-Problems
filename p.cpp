#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d;
    int ara[100];
    cin>>n;

    while(1)
    {
        n++;

        a=n/1000;
        b=(n/100)%10;
        c=(n/10)%10;
        d=n%10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        {
            break;
        }

    }
    cout<<n<<endl;
    return 0;
}