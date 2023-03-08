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
    ll int n;
    cin >> n;
    // cout<<floor(log2(n))<<endl;
    // ll int val =floor(log2(n));
    // if ( n== 3 || n==2)
    // {
    //     cout<<1<<endl;
    // }
    // else if (n==1)
    // {
    //     cout<<0<<endl;
    // }
    // else
    // {
    //     cout<<val*val-1<<endl;
    // }
    int ans = 0;
    int last = 0;
    while (n > ans)
    {
        last = ans;
        ans = 2 * ans + 1;
    }
    cout<<last<<endl;
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}