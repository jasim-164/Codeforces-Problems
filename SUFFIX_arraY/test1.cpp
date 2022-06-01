#include<iostream>
using namespace std;
int main()
{
  int i = 0, flag=0;
  while ( 0 )
  {
    // This line will never get executed
    printf( "%d\n", ++i );
    flag++;
    if (i == 5)
      break;
  }
  if (flag==0)
     printf ("Didn't execute the loop!");
 return 0;
}
