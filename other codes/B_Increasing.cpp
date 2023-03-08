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

#define fora(mp)      \
    for (auto x : mp) \
        ;
void BADjX()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int k;cin>>k;
        mp[k]++;
    }
    for(auto x: mp){
        if (x.second>1)
        {
            cout<<"NO"<<endl;return;
        }
        
    }
    cout<<"YES"<<endl;
}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}