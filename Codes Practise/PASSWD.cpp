#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
// #include <bits/stdc++.h>
#include <string>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string ans;
        cin >> ans;
        int len = ans.length();
        bool low = 0, high = 0, digi = 0, spec = 0;
        if (len >= 10)
        {

            for (int i = 0; i < len; i++)
            {
                // int intdata1 = stoi(ans[i]);
                if (islower(ans[i]))
                {
                    low = 1;
                }
                else if (isupper(ans[i]))
                {
                    high = 1;
                }

                else if (isdigit(ans[i]))
                {
                    digi = 1;
                }
                else if (ans[i] == '@' || ans[i] == '#' || ans[i] == '%' || ans[i] == '&' || ans[i] == '?')
                {
                    spec = 1;
                }
            }
        }
        if (low == 1 && high == 1 && digi == 1 && spec == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}