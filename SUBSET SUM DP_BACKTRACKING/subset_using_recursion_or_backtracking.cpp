#include<bits/stdc++.h>
using namespace std;
bool issubsetsum(int set[],int n,int sum)
{ //base case
    if(sum==0)
    {
       return true;
    }
    if(n==0 && sum !=0)
    {
        return false;
    }
    //ignore it
    if(set[n-1]>sum)
    {
        issubsetsum(set,n-1,sum);
    }


    return issubsetsum(set,n-1,sum) ||  issubsetsum(set,n-1,sum-set[n-1]);


}
int main()
{
     int set[]={3,34,4,12,5,2};
    int sum =13;
    int n=sizeof(set)/sizeof set[0];
    //cout<<n<<endl;
    if(issubsetsum(set,n,sum)==true)
        cout<<"found a subset with given sum"<<endl;
    else
        cout<<"no subset with given sum"<<endl;

    return 0;
}
