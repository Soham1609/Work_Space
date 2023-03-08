#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>
#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int ans = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            // count++;
            // if (arr[i] > 0 && arr[i] < 8)
            // {
            //     // ans++;
            //     // 
            //     // if (ans == 7)
            //     // {
            //     //     count = i + 1;
            //     //     break;
            //     // }
            // }
        }
        int x = n-1;
        while (1)
        {
            if (arr[x]>0 && arr[x]<8)
            {
                cout<<x+1<<endl;
                break;
            }
            x--;
            
            
        }
        
        // cout<<count<<endl;
    }
    return 0;
}