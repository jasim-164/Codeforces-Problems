#include<bits/stdc++.h>
using namespace std;
int main()
{
string s="910";
string a="";
int m=3;
 for (int i = m - 1; i >= 0; i--)
  a += s[i];
  int i;
  for ( i = 0; a[i] == '0'; i++);
    a[i]--, a[0]++;
    cout<<a<<endl;

}
