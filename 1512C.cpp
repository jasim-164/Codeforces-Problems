#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for(int tc = 1; tc <= t; tc++)
    {
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        int n = a + b;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                a--;
            }
            if(s[i] == '1')
            {
                b--;
            }
        }
        int k = 1;
        for(int i = 0; i < n/2; i++)
        {
            if(s[i] != s[n - i - 1])
            {
                if(s[i] == '?')
                {
                    if(s[n - i - 1] == '0')
                    {
                        s[i] = '0';
                        a--;
                    }
                    else
                    {
                        s[i] = '1';
                        b--;
                    }
                }
                else if(s[n - i - 1] == '?')
                {
                    if(s[i] == '0')
                    {
                        s[n - i - 1] = '0';
                        a--;
                    }
                    else
                    {
                        s[n - i - 1] = '1';
                        b--;
                    }
                }
                else
                {
                    k = 0;
                }
            }
        }
        if(a < 0)
        {
            k = 0;
        }
        if(b < 0)
        {
            k = 0;
        }
        for(int i = 0; i < n/2; i++)
        {
            if(s[i] == '?')
            {
                if(a >= 2)
                {
                    a -= 2;
                    s[i] = '0';
                    s[n - i - 1] = '0';
                }
                else if(b >= 2)
                {
                    b -= 2;
                    s[i] = '1';
                    s[n - i - 1] = '1';
                }
                else
                {
                    k = 0;
                }
            }
        }
        if(n % 2 == 1)
        {
            if(s[n/2] == '?')
            {
                if(a > 0)
                {
                    a--;
                    s[n/2] = '0';
                }
                else if(b > 0)
                {
                    b--;
                    s[n/2] = '1';
                }
            }
        }
        if(k == 0)
        {
            cout << "-1\n";
            continue;
        }
        string s2 = s;
        reverse(s2.begin(), s2.end());
        if(s == s2)
        {
            cout << s << '\n';
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}
