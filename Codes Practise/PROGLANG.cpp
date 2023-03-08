#include <bits/stdc++.h>
using namespace std;
void solve()
{
    // cout<<"hello"<<endl;
    int a , b , c,  d, e ,f;
    cin>>a>>b>>c>>d>>e>>f;
    int ans = 0;
    if ((a==c || b == d )or (a==d || b == c ))
    {   
        ans ++;
    }
    if ((a==e and b == f ) or (a==f and b == e ))
    {
        ans++;
    }
    cout<<ans<<endl;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin>>tc;
    for (int t = 1; t <= tc; t++)
    {
        solve();
    }
}