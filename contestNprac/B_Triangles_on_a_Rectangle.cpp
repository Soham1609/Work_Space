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
    ll int w, h;
    cin >> w >> h;
    ll int h1 = 0, h2 = 0, w1 = 0, w2 = 0;
    ll int a, b, c, d;
    ll int val1 = 0, valn = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {

        int x;
        cin >> x;
        if (i == 0)
        {
            val1 = x;
        }
        if (i == a - 1)
        {
            valn = x;
        }
    }
    h1 = (valn - val1) * h;
    cin >> a;

    for (int i = 0; i < a; i++)
    {

        int x;
        cin >> x;
        if (i == 0)
        {
            val1 = x;
        }
        if (i == a - 1)
        {
            valn = x;
        }
    }
    h2 = (valn - val1) * h;
    cin >> a;

    for (int i = 0; i < a; i++)
    {

        int x;
        cin >> x;
        if (i == 0)
        {
            val1 = x;
        }
        if (i == a - 1)
        {
            valn = x;
        }
    }
    w1 = (valn - val1) * w;
    cin >> a;

    for (int i = 0; i < a; i++)
    {

        int x;
        cin >> x;
        if (i == 0)
        {
            val1 = x;
        }
        if (i == a - 1)
        {
            valn = x;
        }
    }
    w2 = (valn - val1) * w;
    ll int ans = max(max(h1, h2), max(w1, w2));
    cout<<ans<<endl;
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}