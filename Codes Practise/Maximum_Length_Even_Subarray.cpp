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
        int n;
        cin >> n;
        if (n % 4 == 0 || n % 4 == 3)
        {
            cout << n << endl;
        }
        else
        {
            cout << n - 2 << endl;
        }
    }
    return 0;
}