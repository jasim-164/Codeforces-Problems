#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int count=0;
    while(x!=0)
    {
        if(x>=5)
        {
            x-=5;
            count++;
        }
        else if(x>=4)
        {
            x-=4;
            count++;
        }
         else if(x>=3)
        {
            x-=3;
            count++;
        }
         else if(x>=2)
        {
            x-=2;
            count++;
        }
         else if(x>=1)
        {
            x-=1;
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}
