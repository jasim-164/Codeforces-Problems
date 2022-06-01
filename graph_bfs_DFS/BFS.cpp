#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void addedge(vector<int>v,int x,int y)
{
    v[x].push_back(y);
}
void bfs(vector<int>v,int ver,int ii)
{
    vector<bool>b;
    for(int i=1;i<ver;i++)
        b[i]=false;
    b[ii]=true;
    queue<int>q;
    q.push(ii);
    while(q!=empty)
    {
        int u=q.pop();
        cout<<u<<endl;
        for(auto &itr:u)
        {
            if(itr!=true)
            {
                q.push(itr);
            }
        }
    }
}
int main()
{
    vector<int>v;
    int ver,ed;
    int x,y;
    cin>>ver>>ed;
    for(int i=0;i<ed;i++)
    {
        cin>>x>>y;
        addedge(v,x,y)
    }
    int ii;
    cin>>ii;
    bfs(v,ver,ii);


    return 0;
}
