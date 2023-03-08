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
    int n, m = 0, big = 0;
    cin >> n;
    m = n;
    int num = n;
    string s = to_string(n);
    int len = s.length();
    int arr[n - 1];
    int i = 0;
    while (n / 10 != 0)
    {
        int x = n % 10;
        n = n / 10;
        //  n % 10 + x;
        // cout << arr[i] << " ";
        big = max(big, n % 10 + x);
        x = 0;

        i++;
    }
    // cout << big << endl;
    i = 0;
    while (m != 0)
    {
        int y = m % 10;
        m = m / 10;
        if (big != y + m % 10)
        {
            // cout << y;
            if (arr[i] != -1)
            {
                arr[i] = y;
            }
        }
        else
        {
            // cout<<big;
            arr[i] = big;
            arr[i + 1] = -1;
            m / 10;
        }
        i++;
    }
    for (int i = len - 1; i >= 0; i--)
    {
        if (arr[i] != -1)
        {
            cout << arr[i] ;
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