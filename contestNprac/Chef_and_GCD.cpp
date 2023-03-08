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
    int x, y, ans, a, b;
    cin >> a >> b;
    if (a > b)
    {
        y = a;
        x = b;
    }
    else
    {
        x = a;
        y = b;
    }

    
    // cin>>x>>y;
    int val = __gcd(x, y);
    if (val > 1)
    {
        cout << 0 << endl;
    }

    else if (__gcd(x + 1, y) > 1 || __gcd(x, y + 1) > 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;

        // if (__gcd(x,y+1) >1 )
        // {
        //     cout<<1<<endl;
        // }
        // else
        // {
        // }
    }
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}