#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c0,c1,h;
        cin>>n>>c0>>c1>>h;
        string s;
        cin>>s;
        int zero=0,one=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
                zero++;
            else
                one++;
        }
        if(c0>c1)
        {
            cout<<min(c0*zero+c1*one,c1*n+zero*h)<<endl;
        }
        else if(c0<c1)
        {
            cout<<min(c0*zero+c1*one,c0*n+one*h)<<endl;
        }
        else
        {
            cout<<c0*zero+c1*one<<endl;
        }
    }
    return 0;
}
