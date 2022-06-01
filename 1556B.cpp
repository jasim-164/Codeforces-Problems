#include<bits/stdc++.h>
using namespace std;
int solve(string s,string t)
{
        vector<int>a,b;
        int n=s.size();
        for(int i=0;i<n;i++)
        {

            if(s[i]!=t[i] )
            {
                if(s[i]=='0')
                a.push_back(i);
                else
                b.push_back(i);
            }

        }
        int p=a.size();
        int q=b.size();
        int ans=0;
        for(int i=0;i<min(p,q);i++)
        {
               ans+=abs(a[i]-b[i]);
        }
     return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //does not contain same parity
        int n;
        cin>>n;
        int ara[n+1];
        int odd=0,even=0;
        string s="";
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]&1)
            {
                odd++;
                s+='1';
            }
            else
            {
              even++;
              s+='0';
            }

        }
         if(abs(even-odd)>1)
         {
               cout<<"-1"<<endl;
               continue;
         }

        string t="";
        string t1="";
        int ans1=INT_MAX;
        int ans2=INT_MAX;
        if(odd>=even)
        {
            int temp=0;
           for(int i=0;i<n;i++)
           {
               if(!temp)
               {
                   t+='1';
                   temp=1;
               }
               else
               {
                    t+='0';
                    temp=0;
               }

           }
           ans1=solve(s,t);

        }
        if(even>=odd)
        {
            int temp=0;
           for(int i=0;i<n;i++)
           {
               if(!temp)
               {
                   t1+='0';
                   temp=1;
               }
               else
               {
                    t1+='1';
                    temp=0;
               }

           }
           ans2=solve(s,t1);

        }
        cout<<min(ans1,ans2)<<endl;



        //12345
        //1234
        //21436
        //214365
        //max diff can be 0,1
        //else -1
        //1 0 replace



    }
    return 0;
}
