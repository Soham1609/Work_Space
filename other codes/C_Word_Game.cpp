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

int binarySearch(string array[], string x, int low, int high)
{

    // Repeat until the pointers low and high meet each other
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == x)
            return 1;

        if (array[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return 0;
}

void SohamX()
{
    int n;
    cin >> n;
    // int n;
    // cin >> n;
    string a[n], b[n], c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    // sort(a, a + n);
    // sort(b, b + n);
    // sort(c, c + n);
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
        mp[b[i]]++;
        mp[c[i]]++;
    }

    int sa = 0, sb = 0, sc = 0;

    for (auto x : mp)
    {
        if (x.second == 3)
        {
            continue;
        }
        else if (x.second == 2)
        {
            int count = 0;
            string a1 = x.first;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == a1)
                {
                    sa++;
                    count++;
                    if (count == 2)
                    {
                        break;
                    }
                }
                if (b[i] == a1)
                {
                    sb++;
                    count++;
                    if (count == 2)
                    {
                        break;
                    }
                }
                if (c[i] == a1)
                {
                    sc++;
                    count++;
                    if (count == 2)
                    {
                        break;
                    }
                }
            }
        }
        else
        {
            string a1 = x.first;
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == a1)
                {
                    sa = sa + 3;
                    count++;
                    break;
                }
                if (b[i] == a1)
                {
                    sb = sb + 3;
                    count++;
                    break;
                }
                if (c[i] == a1)
                {
                    sc = sc + 3;
                    count++;
                    break;
                }
            }
        }
    }

    cout << sa << " " << sb << " " << sc << endl;
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}

// for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " " << b[i] << " " << c[i];
//         cout << endl;
//         if (a[i] == b[i] && b[i] == c[i])
//         {
//             continue;
//         }
//         else if (a[i] == b[i])
//         {
//             sa++;
//             sb++;
//             sc = sc + 3;
//             continue;
//         }
//         else if (a[i] == c[i])
//         {
//             sa++;
//             sb = sb + 3;
//             sc++;
//             continue;
//         }
//         else if (b[i] == c[i])
//         {
//             sa = sa + 3;
//             sb++;
//             sc++;
//             continue;
//         }
//         else
//         {
//             sa = sa + 3;
//             sb = sb + 3;
//             sc = sc + 3;
//             continue;
//         }
//     }
