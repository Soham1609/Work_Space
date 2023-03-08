#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc int t;cin>>t;while(t--)
#define ll long long
#define ios  cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
        
#define fora(mp) for(auto x :mp); 
void BADjX(){
        map<int,int>mp;
        int n;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin>>k;
            mp[k]++;
        }
        ll int ans =0;
        for(auto x: mp){
            ans = max(ans , x.second);
        }
        

}
int main()
{
    ios
    tc
    BADjX();
    return 0;
}