#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc int t;cin>>t;while(t--)
#define ll long long
#define ios  cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
        
#define fora(mp) for(auto x :mp); 
void BADjX(){
        int n;
        cin>>n;
        int arr[n];
        map<int ,int>mp;

        ll sum;
        cin>>arr[0];
        for (int i = 1; i < n; i++)
        {
            cin>>arr[i];
            if (arr[i-1]!= arr[i])
            {
                sum = sum + arr[i]^arr[i-1];
            }
            
            // mp[arr[i]]++;
            

        }

        for(auto x: mp){

        }
}
int main()
{
    ios
    tc
    BADjX();
    return 0;
}