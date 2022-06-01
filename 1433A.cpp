#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,t;
    cin>>t;
    while(t--)
    {
      cin>>x;
      int t=0,sum=0;
    for(int i=1; i<=9; i++)
    {
        int p=i;
        for(int j=1; j<=4; j++)
        {
            sum+=j;
            if(p==x)
            {
                t=1;
                break;
            }
            p=p*10+i;

        }
        if(t==1)
            break;
    }
    cout<<sum<<endl;
    }
 return 0;
}

