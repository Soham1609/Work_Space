#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define ll long long
#define ios                     \
    cin.sync_with_stdio(false); \
    cin.tie(0);                 \
    cout.tie(0);
using namespace std;

void SohamX()
{
    int n;
    cin >> n;
    ll int sum = 0;
    int k;
    n = n - 1;
    // cout<<n<<endl;
    int arr[n];
    int bigg =0;
    for (int i = 0; i < n; i++)
    {int k;
        cin>>k;
        // cin >> arr[i];
        // cout << arr[i] << endl;
        sum = sum + k;
        bigg = max(bigg ,k);
    }
    // sum = sum+k;

    cout<<sum+bigg<<endl;
    // cout<<sum<<endl;
    // if (n == 1)
    // {
    //     sum = sum * 2;
    // }
    // else if (n == 2)
    // {
    //     sum = sum + max(arr[0], arr[1]);
    // }
    // else
    // {
    //     // cout<<sum<<endl;

    //     for (int i = 0; i < n - 1; i++)
    //     {

    //         if (arr[i + 1] <= arr[i] && i + 1 == n - 1)
    //         {
    //             sum = sum + arr[i + 1];
    //             // cout<<sum<<endl;
    //         }
    //         else if (arr[i + 1] > arr[i])
    //         {

    //             sum = sum + arr[i + 1] - arr[i];
    //             // cout << sum << endl;
    //         }
    //     }
    // }

    // cout << sum << endl;
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}