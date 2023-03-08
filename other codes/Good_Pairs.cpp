#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc int t;cin>>t;while(t--)
#define ll long long
#define ios  cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
        
#define fora(mp) for(auto x :mp) 

#include<iostream>
 
int factorial(int n)
{
    // single line to find factorial
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}

void BADjX(){
        int n;
        cin>>n;
        map<ll int,ll int>mp;
        for (int  i = 0; i < n; i++)
        {
            int k;cin>>k;
            mp[k]++;


        }
        ll sum =0;

       for(auto x :mp) {
            if (x.second>1)
            {
                ll y  = x.second * (x.second -1);
                sum = sum + y/2;
            }

            

        }
        cout<<sum<<endl;
        
}
int main()
{
    ios
    tc
    BADjX();
    return 0;
}