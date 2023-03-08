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
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        bool flag = 0;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        map<vector<int>, int> mp;

        // sort(nums.begin() , nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {

            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    if (nums[i] + nums[j] + nums[k] == 0)
                    {
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        sort(temp.begin(), temp.end());
                        mp[temp]++;

                        // ans.push_back(temp);
                        temp.clear();
                        //     cout<<i<<" "<<j<<endl;
                        // cout<<nums[i]<<" "<<nums[j]<<endl;

                        // return ans;
                    }
                }
            }
        }
        
        for(auto x: mp){
            ans.push_back(x);
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