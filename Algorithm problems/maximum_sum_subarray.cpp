#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=0;i<n;i++)cin>>v[i];
    int max_value=INT_MIN,max_current=v[0];
    for(int i=1;i<n;i++)
    {
        max_current=max(v[i],max_current+v[i]);
        if(max_current>max_value)
            max_value=max_current;
    }
    cout<<max_value<<endl;
    return 0;
}
