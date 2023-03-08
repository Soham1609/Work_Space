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
        bool flag = 0;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int currspeed = arr[0];
        for (int i = 0; i < n ; i++)
        {

            if (currspeed >= arr[i])
            {
                currspeed = arr[i];
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
// if (n == 1)
// {
//     cout << 1 << endl;
// }
// else
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < arr[i + 1]&& i!=0)
//         {
//             cout << i + 1 << endl;
//             break;
//         }
//         else
//         {
//             cout<<
//         }

//     }
// }