#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ara[m+1],rslt;
    for(int i=0;i<m;i++)
        cin>>ara[i];
    sort(ara,ara+m);
    int min=288714587;
    for(int i=0;i<m;i++)
    {
    rslt=ara[n+i-1]-ara[i];
    //cout<<rslt<<endl;
    if(rslt<min)
    {
        min=rslt;

    }
    if((n+i-1)==(m-1))
    {
        break;
    }
    }
    cout<<min<<endl;
    return 0;
}
