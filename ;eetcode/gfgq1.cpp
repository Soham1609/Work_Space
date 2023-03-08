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

class gfgq1
{
public:
    bool canPair(vector<int> nums, int k)
    {
        // Code here.
        map<int, int> mp;
        // vector<int> a;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]%k]++;
            // a.push_back(nums[i] % k);
            nums[i]=nums[i]%k;
        }
        for (int i = 0; i < k; i++)
        {
            if(mp[k%i]!=mp[(k-i)%i]){
                return 0;
            }
        }
        
        return true;
        
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