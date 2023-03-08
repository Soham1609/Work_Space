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

// void SohamX()
// {

// }
int main()
{
    // ios
    //     tc
    //     SohamX();
    int n, k, x;
    cin >> n >> k >> x;
    int arr[n];
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int diff[n - 1];
    int a1 = 0;
    for (int i = 0; i < n - 1; i++)
    {

        diff[i] = arr[i + 1] - arr[i];
        // cout<<diff[i]<<endl;
    }
    sort(diff, diff + (n - 1));

    for (int i = 0; i < n - 1; i++)
    {
        a1 = diff[i];
        // cout<<a1<<endl;
        if (a1 > x)
        {
            // cout<<"diff"<<diff[i]<<endl;
            if (k != 0 && a1 <= x * 2)
            {
                k--;
            // cout<<ans<<endl;/ndl;
                // continue;
            }
            else if (a1 % x == 0 && k >= a1 / x)
            {
                k = k - a1 / x - 1;
            }
            else if (a1 % x != 0 && k >= a1 / x + 1)
            {
                k = k - a1 / x;
            }
            else
            {
                ans++;
                cout<<k<<endl;
            }
            // cout<<ans<<endl;
            
        }
    }

    cout << ans << endl;
    return 0;
}