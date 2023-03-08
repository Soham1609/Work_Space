#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
// #include <bits/stdc++.h>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >>c;
        // cout<<a-b<<endl;
        d = a*b;
         int y;
        if (a%3 ==0)
        {
         y = (a/3 )-1;
            /* code */
        }
        else
        {
         y = (a/3 );
            /* code */
        }
        
        
        cout<<d+(y*c)<<endl;
        
    }
    return 0;
}
