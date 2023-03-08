#include <iostream>
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
 




struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    void ans(TreeNode* root , int lvl,  vector<vector<int>> &vec){
        if(root == nullptr){
            return;
        }
        vec[lvl].push_back(root->val);
        if(root->left != nullptr){
            ans(root->left , lvl+1, vec);
        }
        if(root->right != nullptr){
            ans(root->right , lvl+1, vec);
        }
        return;
        
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans1;
        ans(root,0,ans1);
        return ans1;

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