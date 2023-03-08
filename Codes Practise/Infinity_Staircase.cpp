#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>
#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int test;
        test = n % 5;
        int x;
        x = n / 5;
        if (test == 2 || test == 3 || test == 4)
        {
            cout << (x * 2) + 1 << endl;
        }
        else
        {
            cout << x * 2 << endl;
        }
    }
    return 0;
}