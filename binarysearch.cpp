#include<iostream>
using namespace std;
int binary(int *ara,int n,int guess_val)
{  int min_=0,max_=n-1,avg;
        while(min_<=max_)
    {

         avg=(min_+max_)/2;

        if(ara[avg]==guess_val)
        {
            cout<<"found"<<endl;
            cout<<"avg="<<avg<<" "<<ara[avg]<<endl;
            return 1;
        }
        if(guess_val>ara[avg])
        {
            min_=avg+1;
        }
        else
        {
            max_=avg-1;
        }

    }
    return -1;
}
int main()
{
    int ara[100],guess_val,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    cin>>guess_val;
    cout<<binary(ara,n,guess_val)<<endl;


    return 0;
}
