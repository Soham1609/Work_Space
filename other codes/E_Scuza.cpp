#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc int t;cin>>t;while(t--)
#define ll long long
#define ios  cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
        
#define fora(mp) for(auto x :mp); 
void BADjX(){
        
    ll n, q;
    cin >> n >> q;
    // cout << "hello" << endl;
    ll arr[n], val = 0;
    for (ll i = 0; i < n; i++)
    {
        // ll k;
        cin >> arr[i];
        // val = val + k;
        // arr[i] = val;
        // cout<<val<<" ";
    }
    ll ans = 0;
    for (int j = 0; j < q; j++)
    {
        int k=0;
        cin >> k;
        ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= k)
            {
                ans = ans + arr[i];continue;
            }
            cout << ans << " ";
            
        }
        cout << endl;
    }
}
int main()
{
    ios
    tc
    BADjX();
    return 0;
}