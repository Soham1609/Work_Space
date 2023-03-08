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
    class Solution
    {
    public:
        int removeDuplicates(vector<int> &nums)
        {
            int k = 0, n = nums.size();
            for (int i = 0; i < n; i++)
            {
                int j=i;
                while (j<n && nums[i]==nums[j])
                {
                    j++;
                }
                nums[k++]==nums[i];
                i =j-1;
            }
        }
    };
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}