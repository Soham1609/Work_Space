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
    string s;

    cin >> s;
}
int main()
{
    // ios
    // tc
    // SohamX();
    int n;
    string s;

    cin >> s;
    n = s.length();
    int val = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            val = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i ==val)
        {
            continue;
        }
        
        cout<<s[i];
    }
    cout<<endl;
    

    return 0;
}