#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc int t;cin>>t;while(t--)
#define ll long long
#define ios  cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
        
void SohamX(){
        int n;
        cin>>n;
        string ans ="NO";
        int val = n/2020;
        val = val*2020;
        int x = n-val;

        if (x>=0 && x<= (n/2020) )
        {
            ans = "YES";
        }
        cout<<ans<<endl;
        
        
}
int main()
{
    ios
    tc
    SohamX();
    return 0;
}