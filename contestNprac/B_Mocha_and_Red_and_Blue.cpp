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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int countr = 0, countb = 0;
    int oddr = 0, evenr = 0, oddb = 0, evenb = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            if ((i + 1) % 2 == 0)
            {
                evenr++;
            }
            else
            {
                oddr++;
            }
        }
        else
        {
            if ((i + 1) % 2 == 0)
            {
                evenb++;
            }
            else
            {
                oddb++;
            }
        }
    }
    int rbtotal = 0, brtotal = 0;
    rbtotal = oddr + evenb;
    brtotal = evenr + oddb;
    string start, end;
    if (rbtotal >= brtotal)
    {
        start = "S";
        end = "B";
    }
    else
    {
        start = "B";
        end = "S";
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?' && i % 2 == 0)
        {
            cout << start;
        }
        else if (s[i] == '?' && i % 2 == 1)
        {
            cout << end;
        }
        else
        {
            cout << s[i];
        }
    }
    cout << endl;
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}