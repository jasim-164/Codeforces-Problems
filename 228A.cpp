#include<bits/stdc++.h>
using namespace std;
#define lli long long int
typedef vector<lli> vi;
const lli m=100000;
int main()
{
    int ara[5];
    for(int i=0;i<4;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+4);
    int cnt=0;
     for(int i=0;i<3;i++)
    {
        if(ara[i]==ara[i+1])
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
