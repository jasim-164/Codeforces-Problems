#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int a,b;
        cin>>a>>b;
        if(a>=b)
            swap(a,b);
        int cnt=0,rem;
        if(a<b)
        {
            while(a!=b)
            {

                if(b-a<=10)
                {
                    cnt++;
                    break;
                }
                else
                {

                    int r=(b-a)/10;
                    rem=(b-a)%10;
                    cnt+=r;
                    a+=r*10;
                }

            }
        }
        cout<<cnt<<endl;

        }

    return 0;
}
