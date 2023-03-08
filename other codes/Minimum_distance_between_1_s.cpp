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
    string s;
    cin >> s;
    vector<int> x;
    bool flag = 0;
    int prev = 0, curr = 0;
    int ans = 2;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1' && flag == 0)
        {
            prev = i;
            flag = 1;
            cnt++;
        }
        else if (s[i] == '1')
        {
            // curr =i;
            cnt++;
            if ((i - prev) % 2 != 0)
            {
                ans = 1;
                break;
            }
            prev = i;
        }
        // cout << i << " " << prev << endl;
    }
    // cout << cnt << endl;
    // cout << "hello" << endl;
    if (cnt > 1)
    {
        cout << ans << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    // cout << ans << endl;
}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}