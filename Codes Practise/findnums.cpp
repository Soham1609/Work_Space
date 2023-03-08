#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
// #include <bits/stdc++.h>
#include <algorithm>
#include <numeric>

// CPP program to illustrate
// std::lcm function of C++
#include <iostream>
#include <numeric>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int test[n];
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        test[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        test[a - 1] = a - 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (test[i] = -1)
        {
            cout << i + 1 << " ";
        }
    }

    return 0;
}