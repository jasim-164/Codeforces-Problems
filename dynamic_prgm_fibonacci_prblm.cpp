#include<bits/stdc++.h>
#define MAX_N 20
#define EMPTY_VALUE -1
using namespace std;

int memo[MAX_N + 1];

int f(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    if (memo[n] != -1) {
        return memo[n];
    }

    memo[n] = f(n - 1) + f(n - 2);
    return memo[n];
}

int main() {
    int n;
  for (int i = 0; i <= MAX_N; i++) {
      memo[i] = EMPTY_VALUE;
  }
  cin>>n;
  cout<<f(n)<<endl;
  return 0;
}
