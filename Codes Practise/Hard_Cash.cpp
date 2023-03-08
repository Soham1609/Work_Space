#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
// #include <bits/stdc++.h>
#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        ll int n, k;
        cin >> n >> k;
        ll int arr[n];
        ll int coins = 0;
        

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            coins = coins + arr[i] ;
            // start[i] =coins;
            
            // if (coins > val)
            // {
            //     cout<<coins-val<<endl;
            // }
            
        }
        cout<<coins%k<<endl;
       
        
    }
    return 0;
}