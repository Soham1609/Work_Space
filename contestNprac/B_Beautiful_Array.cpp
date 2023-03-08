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
    ll int n, b, k, s;
    cin >> n >> k >> b >> s;
    ll int minl, maxl;
    minl = k * b;
    maxl = k * b + (k - 1) * n;
    ll int arr[n];
    arr[n - 1] = minl;
    ll int val1 = s - minl;
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = 0;
    }

    if ((s < minl || s > maxl) && b != 0)
    {
        cout << -1 << endl;
    }
    


    else
    {
        ll int x = 0;
        if (k == 1)
        {
            x = 0;
        }
        else
        {
            x =  val1 / (k - 1);
        }

        // cout << x << endl;
        ll int i = 0;
        while (x--)
        {
            // cout<<k-1<<" ";
            arr[i] = arr[i] + k - 1;
            i++;
        }
        // cout<<"hello"<<endl;
        if (k == 1)
        {
            // x = 0;
              arr[i] = arr[i] + val1 % (k );
        }
        else
        {
              arr[i] = arr[i] + val1 % (k - 1);
        // cout<<"hello"<<endl;
        }
        
      
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}