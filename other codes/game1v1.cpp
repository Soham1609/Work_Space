#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc int t;cin>>t;while(t--)
#define ll long long
#define ios  cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
        
#define fora(mp) for(auto x :mp); 
void BADjX(){
        map<string ,int>mp;
        int n;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            // int x;
            string s;
            cin>>s;
            mp[s]++;
        }
        for(auto x : mp){
            cout<<x.second<<" ";

        }
        cout<<endl;
        
}
int main()
{
    ios
    tc
    BADjX();
    return 0;
}