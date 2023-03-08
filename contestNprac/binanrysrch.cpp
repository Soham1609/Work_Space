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

int binarySearch(int array[], int x, int low, int high)
{

    // Repeat until the pointers low and high meet each other
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == x)
            return mid;

        if (array[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

void SohamX()
{
    int n;
    cin>>n;
    int arr[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>arr2[i];
    }
    int x=arr2[0];
    int ans = binarySearch(arr,x,0,n-1);
    cout<<ans<<endl;
    
    
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}