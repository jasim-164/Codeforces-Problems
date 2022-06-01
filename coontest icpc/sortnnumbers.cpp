#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
     ifstream f1;
    ofstream f2;
    long long int ara[100000];
    int num;
    cin>>num;
    f1.open("file.txt");
    for(int i=0;i<num;i++)
    {

        //f2.open("file.txt");
        f1>>ara[i];
        cout<<ara[0]<<" ";
    }
    f1.close();

    //f1.open("file.txt");

    return 0;
}
