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
        int test = n % 2;
        if (test == 0)
        {
            cout << "YES" << endl;
        }
        else if (test == 1 && x % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else if (test == 1 && x % 2 == 1)
        {
            cout << "YES" << endl;
        }
        
    }
    return 0;
}