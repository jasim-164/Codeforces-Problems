#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,t;
    cin>>n>>t;
    cin>>s;
    while(t--)
    {

        for(int i=0;i<n;i++)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                int temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
                i=i+1;
            }
        }

    }

    cout<<s<<endl;
    return 0;
}
