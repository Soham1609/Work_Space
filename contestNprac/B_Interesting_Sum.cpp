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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
         cin>>arr[i];   
        }
        sort(arr,arr+n);
        cout<<arr[n-1]+arr[n-2]-arr[0]-arr[1]<<endl;
        
}
int main()
{
    ios
    tc
    SohamX();
    return 0;
}