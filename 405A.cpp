#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
multiset<int,less<int>>v;
int val;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>val;
    v.insert(val);
}
//sort(v.begin(),v.end);
for(auto &itr:v)
{
    cout<<itr<<" ";
}
    return 0;
}
