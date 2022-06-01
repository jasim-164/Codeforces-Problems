#include<bits/stdc++.h>
using namespace std;
void palindrome(string s,int n)
{
    int l=0;
    int h=n-1;
    while(h>l)
    {
        if(s[l]!=s[h])
        {
        cout<<"NO";
        return ;
        }
        l++;
        h--;
    }
    cout<<"YES"<<endl;
}
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int count=0,t;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='0')
        {
              count++;

            if(s[i-1]!='0')
            {
            break;
            }
        }
        else
        {
            break;
        }
    }
   n=n-count;
   palindrome(s,n);

}
