#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    //int p=4;
    while(1)
    {
        n++;
        int p=n;
        int temp=0;
        while(p!=0)
        {
            int r=p%10;
            v.push_back(r);
            p=p/10;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]!=v[i+1])
            {
                temp=1;
            }
            else{
                temp=0;
                break;
            }
        }
        if(temp==1)
        {
            cout<<n<<endl;
            break;
        }
        else{
            v.clear();
        }
    }
    return 0;
}
