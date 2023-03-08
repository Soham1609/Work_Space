#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc    \
    ll t;    \
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
    char arr[8][8];
    for (ll i = 0; i < 8; i++)
    {
        //  cout<<i<<endl;
        for (ll j = 0; j < 8; j++)
        {
            cin >> arr[i][j];
            // cout<<arr[i][j];
            // cout<<endl;
        }
    }
    
    ll count = 0;
    string ans = "";
    for (ll i = 0; i < 8; i++)
    {  count = 0;
        for (ll j = 0; j < 8; j++)
        {
          
            if (arr[i][j] == 'R')
            {
                count++;
                continue;
            }
            if (arr[i][j] == '.')
            {
                count = 0;
                break;
            }
            // cout << count;
        }
        if (count == 8)
        {
            cout << "R" << endl;
            return;
        }
    }
    // count = 0;
    cout<<"B"<<endl;
    return;
    
}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}