#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=2;i<30;i++)
        {
            long long int rslt=pow(2,i)-1;
            if(n%rslt==0)
            {
                cout<<n/rslt<<endl;
                break;
            }
        }
    }
    return 0;
}
