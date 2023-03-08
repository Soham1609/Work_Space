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
   ll int a, b, x, y;
    cin >> x >> y;
    // ll int val = a * b;
    // int x= min(a,b);
    // int y = max(a,b);
    string ans = "YES";
    // if (a==b)
    // {
    // }
    if (y == 1)
    {
        swap(x, y);
    }
    // if (x==y)
    // {
    //     ans ="NO";
    // }
    
    
    if (ans == "YES")
    {
        cout << ans << endl;
        cout << x * (1) << " " << y * x << " " << x * (y + 1) << endl;
    }
    else
    {
        cout<<ans<<endl;
    }
    
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}