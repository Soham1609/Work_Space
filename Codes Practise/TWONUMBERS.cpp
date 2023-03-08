#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>
// #include <boost/math/common_factor.hpp>

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int lcm = 0;
        float gcd = 0;
        int maxL = 0;
        int maxG = 0;
        int x;
        if (n % 2 == 1)
        {
            gcd = __gcd(n / 2, n / 2 - 1);
            x = (n / 2) * (n / 2 + 1);
            x = x / gcd;
            maxG = x - gcd;
        }
        else if (n%2 ==0)
        {
            
        }
        

        // for (int i = 1; i < n/2; i++)
        // {

        //     // lcm = boost::math::lcm(i,n-i);
        //     gcd = __gcd(i, n - i);
        //     // maxG = lcm - ((i*(n-i))/lcm)
        //     float x;
        //     x = (i * (n - i));
        //     x = x / gcd;

        //     maxG = x - gcd;
        //     if (maxG > maxL)
        //     {
        //         maxL = maxG;
        //     }
        // }
        cout << maxL << endl;
    }
    return 0;
}