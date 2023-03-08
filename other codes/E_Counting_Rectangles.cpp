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
    // int n;
    // cin >> n;
    int recs, qs;
    cin >> recs >> qs;
    ll int sum = 0;
    int h[recs], w[recs];
    for (int i = 0; i < recs; i++)
    {
        cin >> h[i] >> w[i];
    }
    while (qs--)
    {
        int h1, w1, h2, w2;
        cin >> h1 >> w1 >> h2 >> w2;
        for (int i = 0; i < recs; i++)
        {
            if (h1 < h[i] && w1 < w[i] && h2 > h[i] && w2 > w[i])
            {
                sum = sum + h[i] * w[i];
            }
        }
        cout << sum << endl;
        sum = 0;
    }
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}