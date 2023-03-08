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
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int i = 0;
        int j = n - 1;
        long long int sum = 0;
        while (j < i)
        {
            long long int temp = min(height[i], height[j]) * (j - i);
            if (temp > sum)
            {

                sum = max(temp, sum);
            }
            if (height[i] < height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return sum;
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