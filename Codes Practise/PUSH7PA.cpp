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
        int n;

        cin >> n;
        int a[n];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (ans == a[i])
            {
                ans++;
            }
            else if (ans < a[i])
            {
                ans = a[i];
            }
        }
    }
    return 0;
}