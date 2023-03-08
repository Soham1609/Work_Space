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

#define fora(mp)      \
    for (auto x : mp) \
        ;
void BADjX()
{
    int n;
    cin >> n;
    int arr[n];
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    string ans = "YES";
    for (int i = 0; i < n; i++)
    {
        if ((i + 1 )!= n)
        {
            if (arr[i] > ar[i] && arr[i] > arr[i + 1])
            {
                ans = "NO";
                break;
            }
        }
        else
        {
           if (arr[i] > ar[i] )
            {
                ans = "NO";
                break;
            } 
        }
        
    }
    cout << ans << endl;
}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}