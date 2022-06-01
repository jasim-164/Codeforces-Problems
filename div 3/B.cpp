#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void divide()
{  int c=0,b;
cin>>b;
while(1)
{
   if(b==1)break;
   if(b<1){
       cout<<-1<<endl;
   return;
   }
    if(b%6==0)
    {
        b=b/6;

    }
    else
    {
        b=b*2;

    }
      c++;
}
  cout<<c<<endl;
    //cout<<c<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        divide();
    }
    return 0;
}
