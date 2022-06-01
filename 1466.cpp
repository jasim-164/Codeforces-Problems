#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ara[100];
    double area;
    vector<int>v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];

        }
         for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                area=double (1/2)*abs(-ara[i]+ara[j]);
                cout<<area<<endl;
                v.push_back(area);
            }


        }

    }

    return 0;
}
