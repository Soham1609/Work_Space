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
    int n, k;
    cin >> n >> k;
    int arr[n];
    string ans = "NO";
    int nonb=0;

    int gcd1 = 0, breaks = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1 || n == 2)
    {
        ans = "YES";
        cout << "YES" << endl;
    }
    else
    {
        int val = __gcd(arr[0], arr[1]);
        for (int i = 2; i < n; i++)
        {
            val = __gcd(val, arr[i]);
        }

        sort(arr, arr + n);
        for (int i = 0; i < n - 1; i++)
        {
            int x = gcd(arr[i], arr[i + 1]);
            if (x == val)
            {
                breaks++;
            }
            if (x != val)
            {
                nonb++;
            }
            
        }
        breaks++;
        if (breaks >= k && k<nonb)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
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