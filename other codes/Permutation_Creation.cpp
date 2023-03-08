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
    if (n < 4)
    {
        cout << -1 << endl;
    }
    else if (n == 4)
    {
        cout << 2 << " " << 4 << " " << 1 << " " << 3 << endl;
    }
    else
    {
        if (n % 2 == 0)
        {
            int x = n / 2, y = (n / 2) - 1;
            int val = 0;
            for (int i = 1; i <= n; i++)
            {

                if (i == 1)
                {
                    cout << 1 << " ";
                    val = 1;
                }
                else if (i % 2 == 0)
                {
                    val = val + x;
                    cout << val << " ";
                }
                else
                {
                    val = val - y;
                    cout << val << " ";
                }
            }
            cout << endl;
        }
        else
        {
            int x = n / 2+1, y = (n / 2) ;
            int val = 0;
            for (int i = 1; i <= n; i++)
            {

                if (i == 1)
                {
                    cout << 1 << " ";
                    val = 1;
                }
                else if (i % 2 == 0)
                {
                    val = val + x;
                    cout << val << " ";
                }
                else
                {
                    val = val - y;
                    cout << val << " ";
                }
            }
                        cout << endl;

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