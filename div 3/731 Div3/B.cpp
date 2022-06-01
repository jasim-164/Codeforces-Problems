#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=0;i<n;i++)
const lli maxn=1000005;
int main()
{
    int t;
    cin>>t;
    char alphabet []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

     while(t--)
    {

     string s1,s;
     cin>>s;
     s1=s;
     int n=s.size();
     int loc=-1;
     map<char,int>mp;
     for(int i=0;i<n;i++)
     {
         if(s[i]=='a')
         {
            loc=i;
         }
         mp[s[i]]++;
     }
     bool f=true;
     for(auto itr: mp)
     {
         if(itr.second>1)
         {
             f=false;
             break;
         }
     }
     if(f==false)
     {
         cout<<"NO"<<endl;
         continue;
     }
     sort(s1.begin(),s1.end());
     bool b=true;
     for(int i=0;i<n;i++)
     {
         if(s1[i]!=alphabet[i])
         {
             b=false;
             break;
         }
     }
     if(b==false)
     {
         cout<<"NO"<<endl;
         continue;
     }
     int i=loc-1;
     int j=loc+1;
     int k=1;
     while(i>=0 || j<n)
     {
         if(s[i]==alphabet[k])
         {
             i--;
         }
         else if(s[j]==alphabet[k])
         {
             j++;
         }
         else
         {
             b=false;
             break;
         }
         k++;
     }

       if(b==false)
     {
         cout<<"NO"<<endl;
     }
     else{
        cout<<"YES"<<endl;
     }

    }
    return 0;
}

