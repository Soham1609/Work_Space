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

#include <stdio.h>

ll  factorial(int n)
{
    if (n == 0)
        return 1;
    ll factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}

ll nCr(ll  n, ll int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
// long long factorial(int n, int M)
// {
//     long long ans = 1;
//     while (n >= 1)
//     {
//         ans = (ans * n) % M;
//         n--;
//     }
//     return ans;
// }
void SohamX()
{
    ll n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    ll val = 0, sum = 0;
    // val = n - x + 1;
    val = nCr(n, x);

    ll val1 = pow(10, 9) + 7;
    ll  ans = pow(2, val);
    // cout<<val1<<endl;
    cout << ans % val1 << endl;
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}