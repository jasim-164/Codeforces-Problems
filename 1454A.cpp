#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cout<<rand()%n<<endl;
        }
    }
    return 0;
}
