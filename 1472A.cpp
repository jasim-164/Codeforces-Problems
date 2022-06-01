#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,w,h,n,area;
    cin>>t;
    while(t--)
    {
        cin>>w>>h>>n;
        long long int count=1;
        while(w%2==0 )
        {
            w=w/2;
            //area=(w)*h;
            count*=2;
        }
        while(h%2==0)
        {
            h=(h/2);
            //area=w*h;
            count*=2;
        }
    if(count >= n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


}

return 0;
}
