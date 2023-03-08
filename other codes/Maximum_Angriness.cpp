#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc int t;cin>>t;while(t--)
#define ll long long
#define ios  cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
        
const int N = 1e5+10;
vector<int>g[N];
bool vis[N];

#define fora(mp) for(auto x :mp);
 int fact(int n);
 
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n
int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
 
void BADjX(){
        int n,m;
        cin>>n>>m;
        if (n==1)
        {
            cout<<0<<endl;
        }
        else
        {
            if (m<=n/2)
            {
                cout<<nCr(n,m-1)<<endl;
            }
            else
            {
                cout<<nCr(n,n/2)<<endl;
            }
            
            
        }
        
        
        
}
int main()
{
    ios
    tc
    BADjX();
    return 0;
}