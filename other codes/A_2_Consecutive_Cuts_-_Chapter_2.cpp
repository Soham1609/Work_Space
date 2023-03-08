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
}
int main()
{
    ios int tc1;
    cin >> tc1;
    for (int k = 0; k < tc1; k++)
    {
        ll int n;
        cin >> n;
        ll int t;
        cin >> t;
        ll int arr[n];
        ll int arr2[n];
        ll int a1 = 0, a2 = 0;
        for (ll int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        a1 = arr[0];
        for (ll int i = 0; i < n; i++)
        {
            cin >> arr2[i];
            if (arr2[i] == a1)
            {
                a1 = i;
            }
        }
        ll int i = a1;
        ll int j = 0;
        string ans = "YES";
        ll int loop = n;
        while (loop--)
        {
            if (arr2[i % n] != arr[j])
            {
                ans = "NO";
                break;
            }
            i++;
            j++;
        }
        if (t == 0 && arr[0] != arr2[0] && ans == "YES")
        {
            ans = "NO";
        }

        cout << "Case #" << k + 1 << ": " << ans << endl;
    }

    return 0;
}