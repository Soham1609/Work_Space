#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
// #define ll long long
#define ios                     \
    cin.sync_with_stdio(false); \
    cin.tie(0);                 \
    cout.tie(0);
using namespace std;

void SohamX()
{
    ll int n;
    cin >> n;
    ll int arr[n];
    ll int max1 = 0;
    for (ll int i = 0; i < n; i++)
    {
        cin >> arr[i];
        max1 = max(max1, arr[i]);
    }
    ll int leftwala = 0, rightwala = 0;
    ll int ans = 0, finalright = 0;
    for ( int i = 0; i < n; i++)
    {
        if (arr[i] == max1)
        {
            if (i == 0)
            {
                rightwala = arr[i] * arr[i + 1];
                ans = max(ans, rightwala);
            }
            else if (i == n - 1)
            {
                leftwala = arr[i] * arr[i - 1];
                ans = max(ans, leftwala);
            }
            else
            {
                rightwala = arr[i] * arr[i + 1];
                leftwala = arr[i] * arr[i - 1];
                ans = max(ans, rightwala);
                ans = max(ans, leftwala);
            }
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}