#include<bits/stdc++.h>
using namespace std;
bool issubsetsum(int *set,int n,int sum)
{
    bool subset[n+1][sum+1];
    //if sum is 0 then ans is true
    for(int i=0;i<=n;i++)
    {
        subset[i][0]=true;
    }
     //if sum is not 0 set is empty then answer is false
   for(int i=1;i<=sum;i++)
    subset[0][i]=false;
   //fill the subset table in botton up manner
   for(int i=1;i<=n;i++)
   {
     for(int j=1;j<=sum;j++)
     {
         if(j<set[i-1])
         {
             subset[i][j]=subset[i-1][j];
         }
         if(j>=set[i-1])
         {
             subset[i][j]=subset[i-1][j] || subset[i-1][j-set[i-1]];
         }
     }
   }
     //print table
     for(int i=0;i<=n;i++)
     {
         for(int j=0;j<=sum;j++)
         {
             cout<<subset[i][j]<< " ";
         }
         cout<<endl;
     }

     return subset[n][sum];



 }
int main()
{
    int set[]={3,34,4,12,5,2};
    int sum =9;
    int n=sizeof(set)/sizeof set[0];
    cout<<n<<endl;
    if(issubsetsum(set,n,sum)==true)
        cout<<"found a subset with given sum"<<endl;
    else
        cout<<"no subset with given sum"<<endl;

    return 0;
}
