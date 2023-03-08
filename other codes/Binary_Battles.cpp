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
 
void BADjX(){
        int a,b,c;
        cin>>a>>b>>c;
        int x=0;
        while (a!=0)
        {
            x++;
            a =a>>1;
        }
        x=x-1;
        // cout<<x<<endl;
        ll ans = x*b + (x-1)*c;
        cout<<ans<<endl;        

}
int main()
{
    ios
    tc
    BADjX();
    return 0;
}