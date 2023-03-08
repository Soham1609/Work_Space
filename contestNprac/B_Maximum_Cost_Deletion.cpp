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
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int count = 01;
    char s1 = s[0];
    int ans = 0;
    if (b < 0)
    {
        for (int i = 1; i < s.length(); i++)
        {
            if (s1 == s[i] && i != s.length() - 1)
            {
                count++;
                s1 = s[i];
            }
            else if (i == s.length() - 1 && s1 == s[i])
            {
                // cout<<s1<<endl;
                count++;
                ans = ans + count * a + b;

                // cout << count << endl;
            }
            else if (i == s.length() - 1 && s1 != s[i])
            {
                count = 1;
                ans = ans + count * a + b;
            }

            else
            {
                // cout << count << endl;
                ans = ans + count * a + b;
                count = 1;
                s1 = s[i];
            }
        }
        cout << ans << endl;
    }
    else
    {
        cout << n * a + n * b << endl;
    }
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}