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
}
class Solution  
{
public:
    int maxProfit(vector<int> &prices)
    {

        int n = prices.size();
        int val1 = prices[0], val2 = 0, ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (prices[i] < val1)
            {
                val1 = prices[i];
            }
            else if ((prices[i] - val1) > val2)
            {
                val2 = prices[i] - val1;
            }
        }
        return val2;
    }
    };
    int main()
    {
        ios
            tc
            SohamX();
        return 0;
    }