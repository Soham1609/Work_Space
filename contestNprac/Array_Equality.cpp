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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    map<int, int> mp1;

    for (int i = 0; i < n; i++)
    {
        mp1[arr[i]]++;
    }
    int big = 0;
    for (auto x : mp1)
    {
        big = max(big, x.second);
    }

    if (n % 2 == 0 && big <= n / 2)
    {
        cout << "Yes" << endl;
    }
    else if (n % 2 == 1 && big <= ((n / 2) + 1))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}