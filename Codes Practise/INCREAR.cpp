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
        int x, y;
        cin >> x >> y;
        int val;
        if (x <= y)
        {
            cout << y - x << endl;
        }
        if (x > y)
        {
            val = x - y;
            if (val % 2 == 1)
            {

                cout << (val / 2) + 2 << endl;
            }
            else
            {
                cout << val / 2 << endl;
            }
        }
    }
    return 0;
}