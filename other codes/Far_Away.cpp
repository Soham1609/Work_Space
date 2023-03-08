#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc ll int t;cin>>t;while(t--)
#define ll long long
#define ios  cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
        
#define fora(mp) for(auto x :mp); 
void BADjX(){
        ll int n,m;
        cin>>n>>m;
        ll int arr[n];
        for (ll int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        ll int sum =0;
        for (ll int  i = 0; i < n; i++)
        {
            ll int x = max(abs(arr[i]-m), abs(arr[i]-1));
            sum = sum+x;
        }
        
        
}
int main()
{
    ios
    tc
    BADjX();
    return 0;
}