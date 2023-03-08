// ( ch == 'a' || ch == 'e' ||
//              ch == 'i' || ch == 'o' ||
//              ch == 'u')
#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
// #include <bits/stdc++.h>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int count = 0, n;
        cin >> n;
        string s;
        char ch;
        cin >> s;
        bool flag = 0;
        for (int i = 0; i < n; i++)
        {
            ch = s[i];
            if ((ch == 'a' || ch == 'e' ||
                 ch == 'i' || ch == 'o' ||
                 ch == 'u'))
            {
                count = 0;
            }
            else
            {
                count++;
            }
            if (count >= 4)
            {
                flag = 1;
                break;
            }
        }
        if (flag ==1 )
        {
            cout<<"NO"<<endl;

        }
        else{
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}
