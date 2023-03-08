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
const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];

bool dfs(int vertex, int child)
{
    vis[vertex] = true;
    int res = 0;
    for (auto x : g[vertex])
    {
        vis[vertex] = true;

        if (x == child)
        {
            // cout << "par-> " << vertex << ", child-> " << x << endl;
            return 1;
            // cout << "par-> " << vertex << ", child-> " << x << endl;
        }

        if (vis[x])
        {
            continue;
        }

        res = dfs(x, child);
    }
    return res;
}

void BADjX()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    // for(auto y :  g[1]){
    //     cout<<y<<endl;
    // }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        if (dfs(x, y) == 1)
        {
            // cout<<"for"<<x<<" "<<y<<endl;
            cout << "YO" << endl;
        }
        else
        {
            // cout<<"for"<<x<<" "<<y<<endl;
            cout << "NO" << endl;
        }
    }
}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}