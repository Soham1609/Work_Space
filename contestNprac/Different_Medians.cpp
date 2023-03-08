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
    cin >> n;
    int i=0;
    // val1 = 
    // while (i<n)
    // {
    //     if (i%2 ==0)
    //     {
    //         cout<<n-1<<" ";
    //     }
    //     else{
    //         cout<<i+1<<" ";
    //     }
    //     i++;

        
    // }
    int ans =n;
    int ans2 =1;
    for (int i = 0; i < n; i++)
    {
        if (i%2 ==0)
        {
            cout<<ans<<" ";
            ans = ans-1;
        }
        else
        {
            cout<<ans2<<" ";
            ans2 = ans2+1; 
        }
        
    }
    
    cout<<endl;
    
    // int arr[n];
    // int val=n ,val2 =n;
    // if (n%2 == 1)
    // {
    //     while (val!= -1)
    //     {
    //         cout<<val<<" ";
    //         val = val-2;
    //     }
    //     int x=2;
    //     while (x<n)
    //     {
    //         cout<<x<<" ";
    //         x=x+2;
    //     }
        
        
    // }
    // else
    // {
    //     while (val!=0 )
    //     {
    //         cout<<val<<" ";
    //         val = val-2;
    //     }
    //     int x=1;
    //     while (x<n)
    //     {
    //         cout<<x<<" ";
    //         x=x+2;
    //     }
    // }
    // cout<<endl;
    
    
    
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}