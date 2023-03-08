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

int check_cp(int a, int b)
{
    return (__gcd(a,b)==1);
}

void BADjX()
{
    int n;
    cin >> n;
    int arr[n];

    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        // if (i== n-1)
        // {
        //     continue;
        // }

        for (int j = i; j < n; j++)
        {

            if (check_cp(arr[i], arr[j]))
            {
                // cout << i << " " << j << endl;
                ans = max(ans, i + j + 2);
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    // cout<<check_cp(8,15);
    // cout << check_cp(4, 5);
    ios
        tc
        BADjX();
    return 0;
}