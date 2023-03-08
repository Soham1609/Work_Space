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
    double arr[n];
    double sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum +arr[i];
    }
    sort(arr, arr+n);
    sum = sum - arr[n-1];
    double val =sum /(n-1);
    // cout<<sum<<endl;
    // cout<<val<<endl;flo
    // cout<<arr[n-1]<<endl;
    double ans = (arr[n-1] + val) ;
    // ans.setprecision(9);

    cout<< fixed << setprecision(9) << ans<<endl;

}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}