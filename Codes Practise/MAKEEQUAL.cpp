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
        cin >> count;
        int arr[count];
        sort(arr, arr + count);

        int min1 = INT_MAX, max1 = INT_MIN;
        min1 =arr[0];
        max1 = arr[count-1];
        for (int i = 0; i < count; i++)
        {
            cin >> arr[i];
            if (arr[i] < min1)
            {
                min1 = arr[i];
            }
            else if (arr[i] > max1)
            {
                max1 = arr[i];
            }
        }
        cout << max1 - min1 << endl;
    }
    return 0;
}