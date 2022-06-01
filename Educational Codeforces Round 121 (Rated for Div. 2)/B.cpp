#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,a,b) for(int i=a;i<=b;i++)
#define mod 1000000007
#define inf 1e18
const lli maxn=1000005;
int main()
{
    int t;
    //char alphabet []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cin>>t;
    while(t--)
    {
       string s;
       cin>>s;
       map<char,int>mp;
       lli n=s.size();
       //find sum is 2 decimal
       bool b=false;
       int pos=0;
       int value=0;
       for(int i=n-1;i>0;i--)
       {
           int sum=0;
           int val1= s[i]-48;
           int val2= s[i-1]-48;
           sum+=(val1+val2);
           if(sum>9)
           {
               b=true;
               pos=i;
               value=sum;
               break;
           }

       }
       if(b)
       {
         s[pos-1]='1';
         s[pos]=(value%10)+'0';
         cout<<s<<endl;
       }
       else{
           int sum=0;
           int val1= s[0]-48;
           int val2= s[1]-48;
           sum+=(val1+val2);
           s[1]=sum+'0';
           s.erase(s.begin()+0);
           cout<<s<<endl;
       }


    }
    return 0;
}



