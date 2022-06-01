#include<bits/stdc++.h>
using namespace std;
int main()
{
int i=0;
string s;
char c;
cin>>s;

  while (s[i])
  {
    c=s[i];
    putchar (toupper(c));
    i++;
  }
  cout<<s;

// su is the string which is converted to uppercase
    string su = "Jatin Goyal";

    // using transform() function and ::toupper in STL
    transform(su.begin(), su.end(), su.begin(),:: toupper);
    cout << su << endl;

    // sl is the string which is converted to lowercase
    string sl = "Jatin Goyal";

    // using transform() function and ::tolower in STL
    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
    cout << sl << endl;
}
