#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int m,int n)
{int temp=0;
    if(n==0)
    {
        return m;
    }
    else
    {
        return gcd(n,m%n);
    }

}
int main()
{
    int a,b,rslt;
    cin>>a>>b;
    rslt=gcd(a,b);
    cout<<rslt<<endl;

    return 0;
}


