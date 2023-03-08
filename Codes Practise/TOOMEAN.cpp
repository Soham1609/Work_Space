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
        float arr[n];
        float sum = 0;
        float val = 0;
        float val2;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];

            //    val = sum/(i+1) ;
            //    if (sum/(i+1) > arr[i+1])
            //    {
            //    }

            //    for (int j = 0; j < i; j++)
            //    {
            //    }
        }
        float sum1 = 0;
        float prev_val = 0;

        for (int i = 0; i < n; i++)
        {
            sum1 = sum1 + arr[i];
            val = sum1 / (i + 1);
            val2 = (sum - sum1) / (n - (i + 1));
            if (val > val2)
            {
                cout << prev_val << endl;
            }
            prev_val = (val +val2)/2;
        }
    }
    return 0;
}