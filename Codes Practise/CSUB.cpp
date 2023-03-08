#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>

int main()
{
    float t;
    cin >> t;
    while (t--)
    {
        float count = 0;
        float x;
        cin >> x;
        string s;
        cin >> s;
        for (int i = 0; i < x; i++)
        {
            if (s[i] == '1')
            {
                count = count + 1;
            }
        }
        cout << count << endl;
        float ans = (count) * (count +1) / 2;
        cout << ans << endl;
    }
    return 0;
}