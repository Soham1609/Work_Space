#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
// #include <bits/stdc++.h>

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
        int val = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < arr[i + 1] && arr[i + 1] <= (2 * arr[i]))
            {
                val++;
            }
            else
            {
                if (ans > val)
                {
                    ans = val;
                    val = 0;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
// }
//     {
//         string s;
//         cin>>s;
//         bool flag =0;
//         for (int i = 0; i < s.length(); i++)
//         {
//             if ((s[i] =='0' && s[i+1] =='1'&& s[i+2] =='0' ) || (s[i] =='1' && s[i+1] =='0'&& s[i+2] =='1' ))
//             {
//                 cout<<"Good"<<endl;
//                 flag = 1;
//                 break;
//             }

//         }
//         if (flag ==0)
//         {
//             cout<<"Bad"<<endl;
//         }
