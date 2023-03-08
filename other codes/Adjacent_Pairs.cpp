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
int swapBitGame(long long N)
{
    int a = 0, b = 0;
    bool flag = 0;
    while (N & 1 == 0)
    {
        N >> 1;
    }
    while (N)
    {
        if (N & 1 == 1)
        {
            a++;
        }
        if (N & 0 == 0)
        {
            b++;
        }
       N=  N >> 1;
    }
    if (a % 2 == 0)
    {
        return 2;
    }
    else
    {
        return 1;
    }

    // code here
}
void BADjX()
{
}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}