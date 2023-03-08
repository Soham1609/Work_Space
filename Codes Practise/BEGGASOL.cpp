// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>


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
        int total = 0;
        int fuel = 0;
        fuel = arr[0];
        // if (fuel>0)
        // {
        //     total++;
        //     for (int i = 1; i < n; i++)
        //     {
        //         total++;

        //     }
            
        // }
        
        if (arr[0] != 0)
        {
            total = 0;
            for (int i = 1; i < n; i++)
            {
                if (fuel == 0)
                {
                    break;
                }
                total++;
                fuel = fuel + arr[i] - 1;
            }
        }
        cout << total + fuel << endl;
    }
    return 0;
}