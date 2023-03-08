#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int days[n];
        int curr_val;
        bool status;
        int count;
        status = 1;
        count = 0;
        curr_val = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> days[i];
            curr_val = curr_val + days[i];
            if (curr_val >= k)
            {
                count++;
                curr_val = curr_val - k;
            }

            else
            {
                // cout << "NO " << i+1 << endl;
                status = 0;
                count++;
                // break;
            }
        }
        if (status == 1)
        {
            cout << "YES" << endl;
        }
        if (status == 0)
        {
            cout << "NO " << count << endl;
        }
    }
    return 0;
}