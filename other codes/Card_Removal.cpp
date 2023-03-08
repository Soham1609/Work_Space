#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc int t;cin>>t;while(t--)
#define ll long long
#define ios  cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
        
#define fora(mp) for(auto x :mp); 
void BADjX(){
        int n;
        cin>>n;
        map<int ,int>mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            mp[x]++;

        }
        int num =mp.size();
        int a=0,b,c;
         for(auto x :mp){
            a = max(a,x.second);

        }
        cout<<n-a<<endl;
        // cout<<num-1<<endl;
        // if (num )
        // {
            
        // }
        // else if (num == 1)
        // {
        //     cout<<0<<endl;
        // }
        // else
        // {
        //     cout<<num<<endl;
        // }
        
        
                

}
int main()
{
    ios
    tc
    BADjX();
    return 0;
}