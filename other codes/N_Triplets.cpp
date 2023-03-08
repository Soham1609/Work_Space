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
    int n;
    cin >> n;
    int i = 2;
    int a = 1, b = 1, c = 1, d = 1;
    int count = 0;
    vector<int> arr;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            arr.push_back(i);
            arr.push_back(n / i);
        }

        i++;
    }
    if (arr.size() < 3)
    {
        cout << -1 << endl;
        return;
    }
    sort(arr.begin(), arr.end());
    a = arr[0];
    b = arr[1];
    c = arr[2];
    for (int i = 2; i < arr.size(); i++)
    {
        a = arr[i - 2];
        b = arr[i - 1];
        c = arr[i];
        if (n % (a * b) == 0 && (a * b * c) % n == 0)
        {
            cout << a << " " << b << " " << c << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}