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
        // cin>>a>>b>>c;
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+3);
        if (arr[2]>arr[1]+arr[0])
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        

        
        // int mx = max(b,c);
        // mx = max(mx,a);

        
}
int main()
{
    ios
    tc
    BADjX();
    return 0;
}