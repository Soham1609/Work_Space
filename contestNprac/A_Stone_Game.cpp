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
    int arr[n];
    int mini = INT_MAX, maxi = INT_MIN;
    int indexmin = 0, indexmax = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (mini > arr[i])
        {
            mini = arr[i];
            indexmin = i;
        }
        if (maxi < arr[i])
        {
            maxi = arr[i];
            indexmax = i;
        }
    }

    int leftse = 0, rightse = 0, koprese = 0, chota = 0, bada = 0;
    // cout<<indexmin<< " "<<indexmax<<endl;
    if (indexmin < indexmax)
    {
        chota = indexmin;
        bada = indexmax;
    }
    else
    {
        chota = indexmax;
        bada = indexmin;
    }
    leftse=bada+1;
    rightse = n- chota;
    koprese = chota+1 + n-bada;
    int ans = min(leftse, rightse);
    int finalans = min(ans, koprese);
    cout<<finalans<<endl;
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}