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
    if (n % 2 == 1)
    {
        cout << 7;
        for (int i = 0; i < n / 2 - 1; i++)
        {
            cout << 1;
        }
    }
    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            cout << 1;
        }
    }
    cout<<endl;
}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}