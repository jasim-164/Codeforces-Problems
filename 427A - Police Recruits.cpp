#include<iostream>
using namespace std;
int main()
{   int n;
    cin>>n;
    int val,hiered=0,untreated=0;
    while(n--)
    {
        cin>>val;
        if(val>0)
        {
           hiered+=val;
           continue;
        }
       if(val<0 && hiered>0)
       {
           hiered-=1;
            continue;
       }
       if(val<0)
       {
           untreated+=1;
       }
    }
    cout<<untreated<<endl;
}
