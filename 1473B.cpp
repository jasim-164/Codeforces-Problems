#include<bits/stdc++.h>
using namespace std;
int lcm(int m,int n)
{
    int max=(m>n)? m:n;
    while(1)
    {
        if(max%m==0&&max%n==0)
        {
            return max;
        }
        ++max;
    }
}
int main()
{
 int t;
 string s,s1;
 cin>>t;
 //cin>>s>>s1;
 while(t--)
 {
     cin>>s>>s1;
     int m=s.size();
     int n=s1.size();
     int l=lcm( m, n);
     //cout<<l<<endl;
     int test=0,sum=0;
     int j=0,k=0;
     for(int i=0;i<l;i++)
     {
         if(j==m)
         {
             j=0;
         }
         if(k==n)
         {
             k=0;
         }
         if(s[j]==s1[k])
            {
                test=1;
            }
            else
            {
                test=0;
                break;
            }
            j++;
            k++;
     }
     int z=0;
     if(test==1)
     {
         for(int i=0;i<l;i++)
         {
             if(z==m)
             {
                 //i=0;
                 z=0;
             }
             cout<<s[z];
             z++;
         }
         cout<<endl;
     }

     else
     {
         cout<<"-1"<<endl;
     }
 }
    return 0;
}
