#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc int t;cin>>t;while(t--)
#define ll long long
#define ios  cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
        
void SohamX(){
        int n;
        cin>>n;
        string ans ="YES";
        for (int i = 0; i < n; i++)
        {
            int k;
            cin>>k;
            if ((i+1)%k != 0)
            {
                ans="NO";
            }
            
        }
        cout<<ans<<endl;
        
}
int main()
{
    ios
    tc
    SohamX();
    return 0;
}