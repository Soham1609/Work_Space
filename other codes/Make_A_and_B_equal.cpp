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
    int n;
    cin >> n;
    vector <int> x;
    x.size();
    string s ;
    // reverse(s.begin(),s.end());
    
   ll  int ar[n], ar2[n];
    ll sum = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum = sum + ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> ar2[i];
        sum2 = sum2 + ar2[i];
    }
    if (sum != sum2)
    {
        cout << -1 << endl;
    }
    else
    {
        // sort(ar,ar+n);
        // sort(ar2,ar2+n);
        ll int ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans = ans + abs(ar[i] - ar2[i]);
        }
        cout << ans / 2 << endl;
    }
}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}