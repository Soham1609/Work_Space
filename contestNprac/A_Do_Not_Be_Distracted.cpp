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
    string s;
    cin >> s;
    int arr[n];
    arr[0] = 1;
    string ans = "YES";
    for (int i = 0; i < n; i++)
    {
        arr[i] = s[i] - 65;
    }
    for (int i = 0; i < n; i++)
    {
        // int x= s[i]-65;
        if (arr[i] != arr[i + 1])
        {
            int count1 = 0;
            count1 = count(arr +i+1 , arr+n ,arr[i] );
            // cout<<count1<<endl;
            if (count1>0)
            {
                ans ="NO";
            }
            
        }
    }

    // for (int i = 1; i < n; i++)
    // {
    //     int a = s[i] - 65;
    //     int val = s[i-1]-65;
    //     if (arr[a] == -1)
    //     {
    //         ans= "NO";
    //     }

    //     if (val != a)
    //     {
    //         arr[i-1] =-1;
    //     }

    // }
    cout << ans << endl;
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}