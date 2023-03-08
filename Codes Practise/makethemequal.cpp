#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
// #include <bits/stdc++.h>
#include <algorithm>

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int count;
        cin >> count;
        int arr[count];
        int min1 , max1;

        for (int i = 0; i < count; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + count);
        min1 = arr[0];
        max1 = arr[count - 1];
        // cout << max1 - min1 << endl;
        cout<<arr[count - 1]-arr[0];
    }
    return 0;
}