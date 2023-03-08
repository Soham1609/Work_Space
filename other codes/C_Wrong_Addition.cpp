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
    ll int a, b, s;
    cin >> a >> s;

    string ans = "";
    ll int x = 0;
    while (a != 0 || s != 0)
    {
        if (s % 10 >= a % 10)
        {
            x = s % 10 - a % 10;
            ans = to_string(x) + ans;
            a = a / 10;
            s = s / 10;
        }
        else if (s % 100 > a % 10 && (s % 100 - a % 10) <= 9)
        {
            x = s % 100 - a % 10;
            ans = to_string(x) + ans;
            a = a / 10;
            s = s / 100;
        }
        else
        {
            ans = "-1";
            break;
        }
    }
    cout << stoll(ans) << endl;
}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}