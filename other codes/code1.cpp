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
}
int main()
{

    vector<int> arr;
    while (1)
    {
        int n;
        int ans = 0;

        cin >> n;
        long long int sum = -1;
        if (n < 0)
        {
            break;
        }
        else
        {
            if (n > 100)
            {
                if (sum != -1)
                {
                    arr.push_back(sum);
                    sum = -1;
                }

                arr.push_back(n);
            }
            else
            {
                sum = sum + n;
            }
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    // ios
    // tc
    BADjX();
    return 0;
}