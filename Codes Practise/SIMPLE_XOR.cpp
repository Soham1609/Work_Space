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
        int a, z;
        cin >> a >> z;
        int test = a % 2;
        if (test == 0)
        {
            cout << a <<" "<< a + 1<<" " << a + 2<<" " << a + 3<< endl;
        }
        else if (test == 1 && a + 4 <= z)
        {
            cout << a + 1 <<" "<< a + 2 <<" "<< a + 3<<" " << a + 4 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}