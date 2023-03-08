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
        int a, k;
        cin >> a >> k;
        if (a == 1 && k == 0)
        {
            cout << "NO" << endl;
        }
        else if (a % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if (a % 2 == 1 && k == 1)
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