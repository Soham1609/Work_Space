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
    int i = 0;
    string ans;
    // cout<<"heloo"<<endl;
    while (s[i] != 'D')
    {
        if (s[i] == 'S')
        {
            i++;
            continue;
        }
        else if (s[i] == '_' && s[i - 1] == '*')
        {
            i++;
            continue;
        }
        else if (s[i] == '*' && s[i - 1] == '*')
        {
            i++;
            continue;
        }
        else if (s[i] == '_')
        {
            ans = ans + 'W';
            i++;
            continue;
        }
        else if (s[i] == '*')
        {
            ans = ans + 'J';
            i++;
            continue;
        }
        i++;
    }
    cout<<ans<<endl;
}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}