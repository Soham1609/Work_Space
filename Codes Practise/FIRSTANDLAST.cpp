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
        int count;
        cin>>count;
        int arr[count];
        for (int i = 0; i < count; i++)
        {
            cin>>arr[i];
        }
        int max;
        max= arr[0]+arr[count-1];
        int temp =0;
        for (int i = 1; i < count; i++)
        {
            temp = arr[i]+arr[i+1];
            // cout<<temp<<endl;
            if (temp>max)
            {
                max= temp;
            }
            // temp =0;
        }
        cout<<max<<endl;
        
        
        
    }
    return 0;
}