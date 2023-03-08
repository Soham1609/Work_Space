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

const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];

#define fora(mp)      \
    for (auto x : mp) \
        ;

// int ismob(int x){

// }
void BADjX()
{
    int n, m, k, x;
    cin >> n >> m >> k >> x;
    // cout<<n<<m<<k<<x;
    // int div=0;
    // if (x%n ==0)
    // {
    //     div = x/n;
    // }
    // else
    // {
    //     div =x/n+1;
    // }
    long int val = (k - 1) * n +  (n+m);
    int div = (x / val) + 1;
    // if (x%val ==0 )
    // {
    //     cout<<"YES"<<endl;
    // }


    // cout<<div<<" "<<val<<endl;
    if (x % val != 0 && (x <= ((div * val) - (n+m))))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}