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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int p, q;
        if (a > b)
        {
            p = a;
        }
        else
        {
            p = b;
        }
        if (c > d)
        {
            q = c;
        }
        else
        {
            q = d;
        }
        if (p > q)
        {
            cout << "Q" << endl;
        }
        else if (p < q)
        {
            cout << "P" << endl;
        }
        else
        {
            cout << "TIE" << endl;
        }
    }
    return 0;
}