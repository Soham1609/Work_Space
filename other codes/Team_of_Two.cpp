#include <bits/stdc++.h>
using namespace std;
#define tt           \
    long long int T; \
    cin >> T;        \
    while (T--)
#define ll long long
#define pb push_back
#define io                      \
    cin.sync_with_stdio(false); \
    cin.tie(0);                 \
    cout.tie(0);

void soham()
{
    int n;
    cin >> n;
    vector<set<int>> vecC(n);
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int current;
            cin >> current;
            vecC[i].insert(current);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            bool val1 = true;
            for (int k = 1; k <= 5; k++)
            {
                if (vecC[i].count(k) == 0 && vecC[j].count(k) == 0)
                {
                    val1 = false;
                    break;
                }
            }
            if (val1 == 1)
            {
                cout << "YES\n";
                return;
            }
        }
    }

    cout << "NO\n";
}
int main()
{
    io tt
    soham();
    return 0;
}