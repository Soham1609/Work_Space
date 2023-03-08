// #include <iostream>
#include <bits/stdc++.h>
#define ll long long
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
    int m;
    cin >> m;
    // string s;
    string a = "";
    cin >> a;
    for (int i = 0; i < m; i++)
    {
        // s = s + a;
    }
    ll int count1 = 0;
    // for (int i = 0; i < n * m; i++)
    // {
    //     if (s[i] == '1')
    //     {
    //         count1++;
    //     }

    // }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            count1++;
        }
    }
    count1 = count1 * m;

    ll int eve0 = 0, odd0 = 0;
    count1 = count1 * m;
    int val3 = 0;

    if (count1 % 2 == 1 && m % 2 == 1)
    {
        cout << 0 << endl;
    }
    // else if (count1 % 2 == 1 && m % 2 == 0)
    // {
    //     // cout << 0 << endl;
    // }

    else
    {
        if (m % 2 == 0)
        {
            // for (int i = 0; i < n; i++)
            // {
            //     if (a[i]==0)
            //     {
            //         eve0++;
            //     }
            //     else
            //     {
            //         break;
            //     }

            // }

            int i = 0;
            while (a[i] != '1' && i < n)
            {
                eve0++;
                i++;
            }
            int j = n - 1;
            while (a[j] != '1' && j > 0)
            {
                eve0++;
                j--;
            }
            cout << eve0 + 1 << endl;
        }
        else
        {

            if (n % 2 == 1)
            {
                if (a[n / 2] != '1')
                {

                    odd0++;
                    int x = n / 2 - 1;
                    int y = n / 2 + 1;
                    while (x < n - 1 && a[x] == '0')
                    {
                        odd0++;
                        x++;
                    }
                    // cout << odd0 <<" "<<"hello"<< endl;
                    while (y >= 0 && a[y] == '0')
                    {
                        odd0++;
                        y--;
                    }
                }
                cout << odd0 + 1 << endl;
            }
            else
            {
                int x = n / 2;
                int y = n / 2 - 1;
                for (int i = x; i < n; i++)
                {
                    if (a[i] == '0')
                    {
                        odd0++;
                    }
                    else
                    {
                        break;
                    }
                }
                // cout << odd0 <<" "<<"hello"<< endl;
                for (int i = y; i >= 0; i--)
                {
                    if (a[i] == '0')
                    {
                        odd0++;
                    }
                    else
                    {
                        break;
                    }
                }
                cout << odd0 + 1 << endl;
            }
        }
    }
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}