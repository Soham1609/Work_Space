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
    int a, b, c;
    cin >> a >> b >> c;
    ll ans=0;
    int arr[3];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    if (a < 2 && b < 2 && c < 2)
    {
        ans = a + b + c;
    }
    else
    {        sort(arr, arr + 3);

        for (int i = 0; i < 3; i++)
        {
            if (arr[i] > 0)
            {
                arr[i]--;
                ans++;
            }
        }

        // sort(arr, arr + 3);
        if (arr[2] > 0 && arr[1] > 0)
        {
            ans++;
            arr[2]--;
            arr[1]--;
        }
        if (arr[2] > 0 && arr[0] > 0)
        {
            ans++;
            arr[2]--;
            arr[0]--;
        }
        if (arr[1] > 0 && arr[0] > 0)
        {
            ans++;
            arr[1]--;
            arr[0]--;
        }
    }
    cout << ans << endl;
}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}