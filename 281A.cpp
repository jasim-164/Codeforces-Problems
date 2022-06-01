#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0;
    if(s[i]>='A'&&s[i]<='Z')
    {
        cout<<s<<endl;
    }
    else{
        s[i]=s[i]-32;
          cout<<s<<endl;
    }
    return 0;

}

