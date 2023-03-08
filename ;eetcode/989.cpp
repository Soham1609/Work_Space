#include <iostream>
#include <vector>
#define ll long long
#include <bits/stdc++.h>
#define tc int t;cin>>t;while(t--)
#define ll long long
#define ios  cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
        
const int N = 1e5+10;
vector<int>g[N];
bool vis[N];

#define fora(mp) for(auto x :mp);
 
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = sum.size();
        int i  = n-1;
        long long int val =0;
          long long int pov =0;

        while (i>=0)
        {
            val = pow(10,n-i-1)*num[i] + val;
        }
        val = val+k;
        vector<int> ans;

        while (val)
        {
            ans.push_back(val%10);
            val = val/10;
        }
        return ans;
        
    }
};
void BADjX(){
        
}
int main()
{
    ios
    tc
    BADjX();
    return 0;
}