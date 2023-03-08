#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc int t;cin>>t;while(t--)
#define ll long long
#define ios  cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
        
#define fora(mp) for(auto x :mp); 
void BADjX(){
        vector <int>nums;
        sort(nums.begin() , nums.end());
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i-1]== nums[i])
            {
                cout<<nums[i]<<endl;
                break;
            }
            
        }
        
}
int main()
{
    ios
    tc
    BADjX();
    return 0;
}