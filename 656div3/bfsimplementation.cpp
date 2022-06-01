#include<bits/stdc++.h>
#define long long int=llt;
const int max_=2147483647;
const int min_=-2147483648;
using namespace std;
adjacencylist()
{
    vector<int>adj[];
    int n;
    int s;
    queue<int>q;
    vector<bool>used(n);
    vector<int>d(n),p(n);
    used[s]=true;
    p[s]=-1;
    while(!q.empty())
    {
        int v =q.front();
        for(int u: adj[v])
        {
            if(!used[u])
            {
                used[u]=true;
                q.push(u);
                d[u]=d[v]+1;
                p[u]=v;
            }
        }
    }
}
shortestpath()
{
    if(!used[u])
    {
        cout<<"no path";
    }
    else{
        vector<int>path;
        for(int v=u;v!=-1;v=p[v])
            path.push_back(v);
        reverse(path.begin(),path.end());
        cout<<"path:";
        for(int v : path)
            cout<<v<<" ";
    }
}


int main()
{
    int t;
    int v,e;
    cin>>v>>e;
    vector<int>v;




    return 0;
}

