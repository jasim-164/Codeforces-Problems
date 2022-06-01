#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int rslt=0,i=0;
    while(1)
    {
        i++;
      if(n<=0)break;
      n--;
      if(i%m==0)n++;
      rslt=i;
    }
    cout<<rslt<<endl;
    return 0;
}
