#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,m,i,j,k,l,s,e;
	cin>>t;
	while(t--)
	{
		cin>>n;
		l=n,e=n-1;
		i=1;
		cout<<"2"<<endl;
		while(i<n)
		{
			cout<<l<<" "<<e<<endl;
			l=(l+e+1)/2;
			e--;
			i++;
		}
	}
	return 0;
}
