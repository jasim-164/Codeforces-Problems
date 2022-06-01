 #include<bits/stdc++.h>
using namespace std;

int main()
{

    int userValue;
    std::vector<vector<int>> theVector;
    for(int i=0; i<3; i++)
    {
        vector<int> row;
        for(int j=0; j<3; j++)
        {
          cin>>userValue;
          row.push_back(userValue);
        }
        theVector.push_back(row);
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<theVector[i][j]<<" ";
        }
        cout<<endl;
    }
}
