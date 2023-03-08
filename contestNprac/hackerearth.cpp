#include <iostream>
#define ll long long
#include <bits/stdc++.h>
// #define tc int t;cin>>t;while(t--)
// #define ll long long
// #define ios  cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
        
// void SohamX(){
       
        
        

// }
int main()
{
    // ios
    // tc
    // SohamX();
    int t;
    cin>>t;
    int x=t;
    while (t--)
    {
         int n,k;
        cin>>n>>k;
        map<int,int>mp;
        string ans="YES";
        for (int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            mp[a]++;
        }
        for (auto x : mp)
        {
            if (x.second >2)
            {
                ans = "NO";
            }
            
        }
        if (k*2<n)
        {
            ans = "NO";
        }
        cout<<"Case #"<<x-t<< ": "<<ans<<endl;
        
    }
    
    return 0;
}