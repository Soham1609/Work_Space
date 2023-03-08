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
        int n, m, x;
        cin >> n >> m >> x;
        if (m == x)
        {
            cout << 0 << endl;
        }
        else if (m < x)
        {
            cout << 0 << endl;
        }

        else
        {
            cout<<(n*x)/(x+1)<<endl;
            // int val1 = 0;
            // int val2 = 0;
            // val1 = n / (x + 1);
            // val2 = n - (val1 * (x + 1)) - 1;
            // cout << val1 + val2 << endl;
        }
    }
    return 0;
}