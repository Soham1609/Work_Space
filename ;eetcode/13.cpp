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

class Solution
{
public:
    int romanToInt(string s)
    {
        int ans;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'I')
            {
                ans++;
            }
            else if (s[i] == 'V' && s[i - 1] == 'I')
            {
                ans = ans + 3;
            }
            else if (s[i] == 'v')
            {
                ans += 5;
            }
            else if (s[i] == 'X' && s[i - 1] == 'I')
            {
                ans += 8;
            }
            else if (s[i] == 'X')
            {
                ans += 10;
            }
            else if (s[i]== 'L')
            {
                ans+=50;
            }
            else if (s[i]== 'C')
            {
                ans+=100;
            }
            else if (s[i]== 'D')
            {
                ans+=500;
            }
            else if (s[i]== 'M')
            {
                ans+=1000;
            }
        }
        return ans;
    }
};
void BADjX()
{
}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}