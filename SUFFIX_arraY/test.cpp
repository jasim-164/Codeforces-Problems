#include<iostream>
using namespace std;
int main()
{

  int k=0,n=7;

   while((1<<k)<<n)
   {
       cout<<"2^k"<<endl;

       cout<<k;
       k++;
   }
}
