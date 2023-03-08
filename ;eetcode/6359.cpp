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
 
class Solution {
public:
    int minMaxDifference(int num) {
        string temp = to_string(num);
        string temp2 = to_string(num);

        int n = temp.size();
        int idx =-1;
        // int ans = 0;
        for(int i = 0; i < n; i++) {
            if(temp[i]!= '9'){
                idx = i;
                break;
            }
        }
        string temp3 = temp;
        char minchar = temp[0];
        char maxchar = temp[idx];
        for (int i = 0; i < n; i++)
        {
            if (temp2[i]==minchar)
            {
                temp2[i] = '0';
            }
            if (temp3[i]==maxchar)
            {
                temp3[i] = '9';
            }
            
            
        }
        int ans = stoi(temp3)-stoi(temp2);
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