
#include <iostream>
using namespace std;

void solve(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;
        if (i == j)
            res++;
    }
    cout<<n-res<<endl;
}

// Driver program to test above function
int main()
{
  int t,n;
  cin>>t;
  while(t--)
  {
      cin>>n;
      int ara[n+1];
      for (int i = 0; i < n; i++)
        cin>>ara[i];
        solve(ara,n);

  }
}
