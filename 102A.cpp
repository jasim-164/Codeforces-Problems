#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    int a,b,c,d;
   if((d1-c2+r1)%2==0)
   {
       a=(d1-c2+r1)/2;
   }
   else
   {
       cout<<"-1"<<endl;
       return 0;
   }
   d=d1-a;
   c=r2-d;
   b=d2-c;
   if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
   {
       if((a<10&&a>0)&&(b<10&&b>0)&&(c<10&&c>0)&&(d<10&&d>0))
       {
           if(a+b==r1&&c+d==r2&&a+c==c1&&b+d==c2&&a+d==d1&&b+c==d2)
           {
           cout<<a<<" "<<b<<endl;
           cout<<c<<" "<<d<<endl;
           }
           else
           {
               cout<<"-1"<<endl;
               return 0;
           }
       }
       else
       {
           cout<<"-1"<<endl;
           return 0;
       }
   }
   else
   {
       cout<<"-1"<<endl;
   }


    return 0;
}
