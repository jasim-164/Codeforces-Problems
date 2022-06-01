#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int temp;
    for(int i=0; i<s.size()/2+1; i++)
    {
        for(int j=i+1;j<s.size()/2+1;j++)
        {
            if(s[2*i]>s[2*j])
            {
                temp=s[2*i];
                s[2*i]=s[2*j];
                s[2*j]=temp;
            }
        }
    }
    cout<<s<<endl;


    return 0;

}
