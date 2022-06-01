#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,t=1;
    cin>>a>>b>>c;
    int s1=a+b+c;
    int s2=a*(b+c);
    int s3=a*b*c;
    int s4=(a+b)*c;
    while(t--)
    {
         if(s1>=s2&&s1>=s3&&s1>=s4)
    {
        cout<<s1<<endl;break;
    }
    if(s2>=s1&&s2>=s3&&s2>=s4)
    {
        cout<<s2<<endl;break;
    }
    if(s3>=s2&&s3>=s1&&s3>=s4)
    {
        cout<<s3<<endl;break;
    }
     if(s4>=s1&&s4>=s2&&s4>=s3){
        cout<<s4<<endl;break;
    }
    }

    return 0;
}
