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
    int n, m;
    cin >> n >> m;
    int sume = 0, sumo = 0,sum0;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '1')
            {
                if ((i + j) % 2 == 0)
                {
                    sume++;
                }
                else
                {
                    sumo++;
                }
                
            }
            else
            {
                sum0++;
            }
            
        }
    }
    cout<<sume+sumo - sum0<<endl;
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}