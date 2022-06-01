#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n;
    string s;
    cin>>t;
    //cout<< __buitin_blz(b)<<endl;
    while(t--)
    {
        cin>>n;
        cin>>s;
        int t=0,count=0;

        for(int i=0;i<n;i++)
        {
            if(t==0)//lead zero
            {
               if(s[i]=='0')
            {
                if(count%2==0)
                {
                    count++;
                cout<<"1";
                }
                else
                {
                    cout<<"0";
                count++;
                }
            }
            else
            {
                break;
            }
            }

        }
        //cout<<"1";
        int sum=0;
        for(int i=count;i<n;i++)
        {
          if(sum%2==0)
          {
              cout<<"1";
              sum++;
          }
            else
            {
                if(s[i]=='0')
                {
                    if(s[i]==s[i-1])
                    {
                     cout<<s[i];
                    sum++;

                    }
                    else
                    {
                    cout<<"1";
                    sum++;
                    }
                }
                else if(s[i]==1)
                {
                     if(s[i]==s[i-1])
                    {
                     cout<<"0";
                    sum++;

                    }
                    else
                    {
                       cout<<"1";
                         sum++;
                    }
                }
            }
        }

    }
    return 0;
}
