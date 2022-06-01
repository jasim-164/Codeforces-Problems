#include<bits/stdc++.h>
using namespace std;
string minx="", maxx="";
int a[105],b[105];
int main()
{
    int m,s;
    cin>>m>>s;
    if(m==1&&s==0)
    {
        cout<<"0 0"<<endl;
    }
    else if(m*9<s || s==0)
    {
        cout<<"-1 -1"<<endl;
    }
    else
    {

        for(int i=0;i<m;i++)
        {
            a[i]=min(s,9);
            maxx+='0'+a[i];
            s-=a[i];
        }
        for(int i=m-1;i>=0;i--)
        {
            minx+=maxx[i];
        }
        //for(int i=0;a[i]=='0';i++)
            //a[i]--,a[0]++;
        cout<<minx<<" "<<maxx<<endl;

    }
    return 0;
}
