#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define ll long long
#define ios                     \
    cin.sync_with_stdio(false); \
    cin.tie(0);                 \
    cout.tie(0);
using namespace std;

void SohamX()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    // cout<<mp.size();
    if (mp.size()%2 ==0 || mp.size()<n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    // for(auto x: mp){
        
    // }
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}