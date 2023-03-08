#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
// #include <bits/stdc++.h>
#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int seasons;
        cin >> seasons;
        ll int ans = 0;
        // int ans = 0;
        int Q[seasons];
        // ll int qsum = 0;
        for (int i = 0; i < seasons; i++)
        {
            cin >> Q[i];
            // qsum = qsum + Q[i];
        }
        for (int i = 0; i < seasons; i++)
        {

            int n;
            cin >> n;

            for (int j = 0; j < n; j++)
            {
                int len = 0;
                cin >> len;
                if (j == 0)
                {
                    ans = ans + len;
                }
                else
                {
                    ans = ans + len - Q[i];
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}