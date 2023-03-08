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
// Input: nums = [13,25,83,77]
class Solution
{
public:
    vector<int> separateDigits(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int x = nums[i];
            string s =to_string( nums[i]);
            for (int j = 0; j < s.length(); j++)
            {
                ans.push_back(int(s[j])-48);
            }
            
            // while (x/10 !=0)
            // {
            //     ans[0]=x%10;
            // }
            
        }
        return ans;
    }
};
void BADjX()
{
}
int main()
{
    cout<<0/10;cout<<"hello";
    return 0;
}