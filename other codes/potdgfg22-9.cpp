#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc int t;cin>>t;while(t--)
#define ll long long
#define ios  cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
        
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        priority_queue<int> a;
        
          priority_queue<int> pq;
        for (int i = 0; i < k; i++)
        {
            pq.push(arr[i]);
        }
        for (int i = k; i < n; i++)
        {
            cout<<pq.top()<<" ";
            pq.pop();
            pq.push(arr[i]);
        }
        

        
    }
};
int main()
{
    ios
    tc
    // BADjX();
    return 0;
}