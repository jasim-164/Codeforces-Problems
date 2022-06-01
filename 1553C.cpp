#include<bits/stdc++.h>
using namespace std;
int test(int g1,int g2,int r1,int r2)
{
    if(g1>g2+r2 or g2>g1+r1)
        return 1;
    else
        return 0;

}
int m1(string s)
{
    //for A
    int g1=0,g2=0,r1=5,r2=5;
    int cnt=0;

    for(int i=0;i<10;i++)
    {
        if(s[i]=='1' or s[i]=='?')
        {
            r1--;
            g1++;
        }
        else
        {
            r1--;

        }
        cnt++;
        if(test(g1,g2,r1,r2))
        {
            return cnt;
        }
        i++;
          if(s[i]=='0' or s[i]=='?')
        {
            r2--;
        }
        else
        {
            r2--;
            g2++;
        }
        cnt++;
        if(test(g1,g2,r1,r2))
        {
            return cnt;
        }
    }
    return cnt;
}

int m2(string s)
{
    //for B
    int g1=0,g2=0,r1=5,r2=5;
    int cnt=0;

    for(int i=0;i<10;i++)
    {
        if(s[i]=='0' or s[i]=='?')
        {
            r1--;
        }
        else
        {
            g1++;
            r1--;
        }

        cnt++;
        if(test(g1,g2,r1,r2))
        {
            return cnt;
        }

        i++;
          if(s[i]=='1' or s[i]=='?')
        {
            r2--;
            g2++;
        }
        else
        {
            r2--;
        }
        cnt++;
        if(test(g1,g2,r1,r2))
        {
            return cnt;
        }
    }
    return cnt;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<min(m1(s),m2(s))<<endl;
    }
    return 0;
}
