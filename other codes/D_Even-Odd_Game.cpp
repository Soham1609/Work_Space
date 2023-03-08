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
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n,greater<int>());
    ll alice = 0, bob = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0 && i % 2 == 0)
        {
            alice = alice + arr[i];
        }
        if (arr[i] % 2 == 1 && i % 2 == 1)
        {
            bob = bob + arr[i];
        }
    }
    if (bob>alice)
    {
        cout<<"Bob"<<endl;
    }
    else if (alice == bob)
    {
        cout<<"Tie"<<endl;
    }
    
    else
    {
        cout<<"Alice"<<endl;
    }
    
    
}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}