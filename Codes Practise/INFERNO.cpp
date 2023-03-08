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
        int n, x;
        cin >> n >> x;
        int h[n];
        int sum = 0;
        int val = 0;
        int time = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
            // sum = sum + h[i];
            if (h[i] % x == 0)
            {
                time = time + (h[i] / x);
            }
            else
            {
                time = time + (h[i] / x) + 1;
            }
        }
        sort(h, h + n);
        val = h[n - 1];
        sum = time;
        if (val > sum)
        {
            cout << sum << endl;
        }
        else
        {
            cout << val << endl;
        }
    }
    return 0;
}