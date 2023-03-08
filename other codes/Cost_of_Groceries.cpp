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
    int n, x;
    cin >> n >> x;
    int arr[n];
    int cst[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> cst[i];
    }

    int long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            sum += cst[i];
        }
    }
    cout << sum << endl;
}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}