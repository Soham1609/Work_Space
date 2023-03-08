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

#define fora(mp)      \
    for (auto x : mp) \
        ;
void BADjX()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            c0++;
        }
    }
    int y = n - c0;
    if (n % 2 == 0)
    {
        if (y % 2 == 1 || c0 % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    else
    {
        if (y % 2 == 1 || c0 % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}