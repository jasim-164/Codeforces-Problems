#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        //int len=s.size();
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
                count++;
        }
        cout<<count<<endl;
    }



    return 0;
}
