#include<bits/stdc++.h>
using namespace std;
long long int m=1e4;
int main()
{
    int k;
    cin>>k;
    string s="";
    for(int i=1;i<=m;i++)
    {
        s+=to_string(i);
    }
    cout<<s[k-1]<<endl;

    return 0;
}

