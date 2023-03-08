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

const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];

#define fora(mp)      \
    for (auto x : mp) \
        ;

void BADjX()
{
    int ans;
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 1; i <= 100; i++)
    {
        if (a % i != 0 && b % i != 0 && c % i != 0)
        {
            ans = i;
            break;
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