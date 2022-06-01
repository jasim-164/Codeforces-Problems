#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
            n/=2;
            n++;
        cout<<s/n<<endl;
    }
    return 0;
}
