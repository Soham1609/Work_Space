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
    int n, m, ans = 0;
    cin >> n >> m;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        ans = 0;
        int a, b;
        cin >> a >> b;
        a--;
        // b--;
        for (int j = 0; j < a; j++)
        {
            // if (j == a)
            // {
            //     j = b;
            //     continue;
            // }
            // cout<<"sss"<<endl;
            ans = __gcd(arr[j], ans);
        }
        for (int k = b; k < n; k++)
        {
            ans = __gcd(arr[k], ans);
            /* code */
        }

        cout << ans << endl;
    }
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}