#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define ll long long
#define ios                     \
    cin.sync_with_stdio(false); \
    cin.tie(0);                 \
    cout.tie(0);
using namespace std;

void SohamX()
{
    ll int n;
    cin >> n;
    ll ans = 0;
    if (n < 6)
    {
        ans = 15;
    }

    else if (n % 2 == 1)
    {
        n = n + 1;
        ans = n * 5;
        ans = ans / 2;
    }
    else
    {
        ans = n * 5;
        ans = ans / 2;
    }

    cout<<ans<<endl;

    // int x = n % 120;
    // ll ans = (n / 120) * 300;
    // int check = x;
    // ll int pizza15 = n % 6;
    // ll int pizza20 = n % 8;
    // ll int pizza25 = n % 10;
    // pizza15 = min(pizza15, (6 - pizza15));
    // pizza20 = min(pizza20, (8 - pizza20));
    // pizza25 = min(pizza25, (10 - pizza25));
    // ll int valmin;
    // valmin = min(pizza15, pizza20);
    // valmin = min(valmin, pizza25);
    // // cout << valmin << endl;
    // if (valmin == pizza15)
    // {
    //     // cout << 1234 << endl;
    //     if (pizza15 == 0)
    //     {
    //         cout << (n / 6) * 15 << endl;
    //     }
    //     else
    //     {
    //         cout << (n / 6) * 15 + 15 << endl;
    //     }
    // }
    // else if (valmin == pizza20)
    // {
    //     if (pizza20 == 0)
    //     {
    //         cout << (n / 8) * 20 << endl;
    //     }
    //     // else if (valmin == 7)
    //     // {
    //     //     cout << (n / 8) * 20 + 20 << endl;
    //     // }
    //     else
    //     {
    //         cout << (n / 8) * 20 + 20 << endl;
    //     }
    // }
    // else
    // {
    //     if (pizza25 == 0)
    //     {
    //         cout << (n / 10) * 25 << endl;
    //     }
    //     // else if (valmin == 9)
    //     // {
    //     //     cout << (n / 10) * 25 + 25 << endl;
    //     // }
    //     // else if (valmin == 7)
    //     // {
    //     //     cout << (n / 10) * 25 + 20 << endl;
    //     // }
    //     else
    //     {
    //         cout << (n / 10) * 25 + 25 << endl;
    //     }
    // }
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}