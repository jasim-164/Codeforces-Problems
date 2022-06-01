#include<bits/stdc++.h>
using namespace std;
int main()
{
    //123456789=45
    //19,29,39,49

    int t,n; //r similar numbers 1..9,91,92,93,94,95,96,97,98,99,199,299,
    // 399,499,599,699,799,899,999,1999,2999,3999,4999,5999,6999,7999,8999
    //9999,19999,29999,39999,49999,59999,69999,79999,89999,99999,199999,299999,399999,499999,599999;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s="";
        if(n>45)
            cout<<"-1"<<endl;
        else if(n<10)
            cout<<n<<endl;
        else
        {
            for(int i=9; i>=1; i--)
            {
                if(n<=i && n<=9)
                {
                    s+=to_string(n);
                    n=0;
                    break;
                }
                else
                {
                    s+=to_string(i);
                    n-=i;
                }
            }
            if(n)
                cout<<-1<<endl;
            else
            {
                reverse(s.begin(),s.end());
                cout<<s<<endl;
            }
        }

    }

    return 0;
}
