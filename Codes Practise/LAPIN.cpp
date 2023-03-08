#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        cin >> s1;
        int l = s1.length() ;
        int val = l / 2;
        string start, end;
        start = s1.substr(0, val);
        if (l % 2 == 1)
        {
            end = s1.substr(val + 1, val);
        }
        else
        {
            end = s1.substr(val, val);
        }
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        if (start == end)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
