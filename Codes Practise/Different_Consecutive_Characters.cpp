#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc int t;cin>>t;while(t--)
#define ll long long
#define ios  cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
        
#define fora(mp) for(auto x :mp); 
void BADjX(){
        string s;
        int n;
        cin>>n;
        cin>>s;
        // int n = s.length();
        int ans =0;
        for (int i = 0; i < n-1; i++)
        {
            if (s[i]==s[i+1])
            {
                ans++;
            }
            
            
        }
        cout<<ans<<endl;
        
}
int main()
{
    ios
    tc
    BADjX();
    return 0;
}