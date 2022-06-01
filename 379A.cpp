#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int n=0;
    while(a>0)
    {
        n++;
        a--;
        if(n%b==0)
            a++;
    }
    cout<<n<<endl;


}
