#include <bits/stdc++.h>
using namespace std;
#define ll long long
//clt + alt + b = run code


int main()
{

    string s="92000";
    string a="";
    int m=5;
    for (int i = m - 1; i >= 0; i--)
        a += s[i];
    int i;

    cout << a << endl;
    for ( i = 0; i < m; i++)
    {
        if(a[i] != '0') break;
    }
    a[i]--;
    a[0]++;
    cout<<a<<endl;
}

