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
    ll int m, n;
    cin >> m >> n;
    ll int min1 = min(m, n);
    ll int max1 = max(m, n);
    if (min1 == 1 && max1 == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (min1 - 1) * 2 + max1 << endl;
    }
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}