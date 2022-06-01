#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int v,edge,u;
void addedge(vector<int>adj[],int x,int y)
{
    adj[x].push_back(y);
    adj[y].push_back(x);
}
void bfs(vector<int>adj[],int i,int v)
{
  queue<int>q;
  q.push(i);
  while(!q.empty())
  {
      cout<<q.front();

  }
}
int main()
{
    cin>>v;
    vector<int>adj[v];
    cin>>edge;
    int x,y;
    for(int i=0;i<edge;i++)
    {
        cin>>x>>y;
        addedge(adj,x,y);
    }
    int node;
    cin>>node;
    bfs(adj,node,v);
}
