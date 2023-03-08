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

int isgood(string s)
{
    int len = s.length();
    int c1 = 0, c0 = 0;
    for (int i = 0; i < len - 1; i++)
    {
        if (s.substr(i, 2) == "01")
        {
            c0++;
        }
        if (s.substr(i, 2) == "10")
        {
            c1++;
        }
    }
    // cout<<c0<<" "<<c1 <<endl;
    // if (c0 == c1)
    // {
    //     return 1;
    // }
    // else
    // {
    //     return 0;
    // }4
    return abs(c0 - c1);
}

void BADjX()
{
    string s;
    cin >> s;
    int len = s.length();
    int ans = 0;
    // s[0]='0';
    // cout<<s<<endl;
    string check = s;
    int val = isgood(s);
    cout<<len/2 + 1 -val<<endl;
    // for (int i = 0; i < len; i++)
    // {
    //     if (check[i] == '0')
    //     {
    //         // cout<<"hello";
    //         check[i] = '1';
    //         // cout<<check<<endl;
    //     }
    //     else
    //     {
    //         check[i] = '0';
    //     }
    //     // cout<<check<<endl;
    //     if (isgood(check))
    //     {
    //         ans++;
    //     }
    //     if (check[i] == '0')
    //     {
    //         check[i] = '1';
    //     }
    //     else
    //     {
    //         check[i] = '0';
    //     }
    // }
    // cout << ans << endl;
}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}