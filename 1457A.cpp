#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,r,c;
    cin>>t;
    vector<int>large;
    while(t--)
    {
        int m1=0,m2=0,m3=0,m4=0;
        cin>>n>>m>>r>>c;
        //1,1
        m1=abs(r-1)+abs(c-1);
        large.push_back(m1);
        m2=abs(r-1)+abs(m-c);
        large.push_back(m2);
        m3=abs(n-r)+abs(c-1);
        large.push_back(m3);
        m4=abs(n-r)+abs(m-c);
        large.push_back(m4);

        sort(large.begin(),large.end());

        cout<<large[3]<<endl;
        large.clear();

    }

    return 0;
}
