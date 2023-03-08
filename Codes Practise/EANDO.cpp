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
        // sort(arr, arr+count);
        int mean = (arr[0]+arr[count-1])/2;
        int testmean;
        bool flag;
        for (int i = 0; i < count; i++)
        {
            testmean = arr[i] + arr[count-i-1];
            if (testmean != mean)
            {
                cout<<"NO"<<endl;
                flag =0;
                break;
            }
            else
            {
                flag =1;
            }
        }
        if (flag ==1)
        {
            cout<<"YES"<<endl;
        }
        
        
        
    }
    return 0;
}