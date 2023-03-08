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
        int a;
        cin >> a;
        int arr[a];
        int count = 0;
        // cin>>arr[0];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < a; i++)
        {
            /* code */
            if (arr[i] != arr[i + 1])
            {
                count++;
            }
            else
            {
                continue;
            }
        }

        cout << count << endl;
    }
    return 0;
}