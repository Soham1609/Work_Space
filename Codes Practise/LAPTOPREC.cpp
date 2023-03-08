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
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
         // Sort the array
            // sort(arr, arr + n);

            // // Find the max frequency using linear traversal
            // int max_count = 1, res = arr[0], curr_count = 1;
            // for (int i = 1; i < n; i++)
            // {
            //     if (arr[i] == arr[i - 1])
            //         curr_count++;
            //     else
            //         curr_count = 1;

            //     if (curr_count > max_count)
            //     {
            //         max_count = curr_count;
            //         res = arr[i - 1];
            //     }
            // }
        sort(arr, arr + n);
        int count = 1, res = arr[0];
        int max_count = 1;
        bool flag = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i-1])
            {
                count++;
            }
            else
            {
                count  = 1;
            }
            if (max_count == count )
            {
                flag = 1;

            }
            // else{
            //     flag = 0 ;
            // }
            if (count > max_count)
            {
                max_count = count ;
                res = arr[i-1];
                flag = 0 ;

            }
            // else if (count == max_count)
            // {
            //     flag =1;
            // }
            
           
        }
        if (flag ==1)
        {
            cout<<"CONFUSED"<<endl;
        }
        else
        {
        cout << res << endl;
        }
    }
    return 0;
}