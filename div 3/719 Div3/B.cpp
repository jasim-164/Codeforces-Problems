#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        int cnt=0;
        if(n<10)
            cout<<n<<endl;
        else
            {

            for(int i=1;i<=9;i++)
            {
                long long int sum=0;
               for(int j=1;j<=10;j++)
               {
                   sum=sum*10+i;
                   if(sum<=n)
                    cnt++;
               }
            }
            cout<<cnt<<endl;
            }
    }
    return 0;
}
