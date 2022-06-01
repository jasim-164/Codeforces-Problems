#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
    return 0;
}
