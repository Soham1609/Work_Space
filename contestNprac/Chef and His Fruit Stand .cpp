#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>


int main()
{
    string a = "soham";
    char ch;
    for (int i = 0; i < a.length(); i++)
    {
        swap(a[i],a[i+1]);
    }
    
    // int t;
    // cin >> t;

    // while (t--)
    // {
    //     int a, b, c, d, e, f;
    //     cin >> a >> b >> c >> d >> e >> f;
    //     int ans = 0;
    //     if ((a == c  &&  b == d) || (a == d  &&  b == c))
    //     {
    //         cout<<1<<endl;
    //     }
    //     else if ((a == e  &&  b == f) || (a == f  &&  b == e))
    //     {
    //         cout<<2<<endl;
    //     }
    //     else{ cout << 0 << endl;}
    // }
    return 0;
}