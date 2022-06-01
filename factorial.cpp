#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double factorial(double n)
{
    if(n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{long double n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}

