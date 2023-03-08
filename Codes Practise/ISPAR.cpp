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
        long long int n, k;
        cin >> n >> k;
        long long int val1, val2;
        val1 = n % 2;
        val2 = k % 2;
        if (val1 == 1)
        {
            if (val2 == 1 && k == 1)
            {
                cout << "ODD" << endl;
            }
            else if (val2 == 1)
            {
                cout << "EVEN" << endl;
            }
            else
            {
                cout << "ODD" << endl;
            }
        }
        if(val1 == 0)
        {
            if (val2 == 0 && k == 2)
            {
                cout << "ODD" << endl;
            }
            else
            {
                cout << "EVEN" << endl;
            }
        }
    }
    return 0;
}
