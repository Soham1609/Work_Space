#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, points = 0, countd = 0, countn = 0;
        string a;
        cin >> x;
        cin >> a;
        for (int i = 0; i < a.length(); i++)
        {
            char test = a[i];
            if (test == 'C')
            {
                points = points + 2;
            }
            else if (test == 'D')
            {
                points = points + 1;
            }
            else
            {
                points = points + 0;
            }
        }
        if (points > 14)
        {
            cout << 60 * x << endl;
        }
        else if (points < 14)
        {
            cout << 40 * x << endl;
        }
        else
        {
            cout << 55 * x << endl;
        }
    }
    return 0;
}