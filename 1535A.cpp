#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ara[5];
        for(int i=0;i<4;i++)cin>>ara[i];
        int first=-1,second=-1;
        int pos=0,pos1=0;
        bool b=true;
        for(int i=0;i<4;i++)
        {
            if(ara[i]>first)
            {
                pos1=pos;
                pos=i;
                //pos1=i-1;
                second=first;
                first=ara[i];
            }
            else if(ara[i]>second)
            {
               second=ara[i];
               pos1=i;
               //cout<<pos1<<endl;
               b=false;
            }
        }
        //if(b==true)pos1=pos-1;
       // cout<<first<< " "<<second<<endl;
        //cout<<pos<< " "<< pos1<<endl;
        if((pos==1 && pos1==2) || (pos==2 &&pos1==1)||(abs(pos-pos1)>1))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
