#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>


int main()
{
   
    
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int count1 =0, count0 =0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if (arr[i]==0)
            {
                count0++;
            }
            else
            {
                count1++;
            }   
        }
        if (count1 >= count0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        
        
        
    }
    return 0;
}