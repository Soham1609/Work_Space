#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc    \
    ll int t;    \
    cin >> t; \
    while (t--)
#define ll long long
#define ios                     \
    cin.sync_with_stdio(false); \
    cin.tie(0);                 \
    cout.tie(0);
using namespace std;

#define fora(mp)      \
    for (auto x : mp) \
        ;
void BADjX()
{
    ll int n, q;
    cin >> n >> q;
    vector<ll int> vec[n];
    ll int arr[n];
    ll int qs[q];
    ll int ans [q];
    for (ll int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // for (ll int i = 0; i < q; i++)
    // {
    //     cin >> qs[i];
    // }
    // sort(arr,arr+n);
    while (q--)
    {
         ll int a,b;
        cin>>a>>b;
        ll int diff=0;
        arr[a-1]=b;
        for (ll int i = 0; i < n-1; i++)
        {
            if (arr[i]>arr[i+1])
            {
                ll int check = arr[i]-arr[i+1];
                diff = max(diff,check);
            }
            
        }
        cout<<diff<<endl;
    }
    
    


}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}