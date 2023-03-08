#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc int t;cin>>t;while(t--)
#define ll long long
#define ios  cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
        
#define fora(mp) for(auto x :mp); 
void BADjX(){
        int a,b,x;
        cin>>a>>b>>x;
        x=x*2;
        if (abs(b-a)%x==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
        // cout<<min(b , a-b)<<endl;
}
int main()
{
    ios
    tc
    BADjX();
    return 0;
}