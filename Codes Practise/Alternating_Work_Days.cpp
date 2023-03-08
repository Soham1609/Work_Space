#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
// #include <bits/stdc++.h>
#include <algorithm>

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c, d;
        cin >> a >> b >> c >> d;
        long long int x = c / a;
        long long int y = d / b;
        if (d % b == 0 && c % a == 0)
        {
            if (abs(x - y) <= 1)
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}