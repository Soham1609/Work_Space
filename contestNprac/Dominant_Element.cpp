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
    int arr[n];
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        mp[k]++;
    }
    int bada1 = 0, bada2 = 0;
    for (auto x : mp)
    {
        if (x.second > bada1)
        {
            bada1 = x.second;
        }
        else if (x.second == bada1)
        {
            bada2 = x.second;
        }
    }
    if (bada1>bada2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
        
    }
    
    

    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    // for (int i = 0; i < ; i++)
    // {
    //     /* code */
    // }
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}