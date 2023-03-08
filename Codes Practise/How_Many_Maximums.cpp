
// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n;
        int count = 0;
        string s;
        cin >> s;
        if (n == 2)
        {
            count++;
            cout << count << endl;

            continue;
        }

        if (n > 2)
        {
            if (s[0] == '1')
            {
                count++;
            }
            if (s[n - 2] == '0')
            {
                count++;
            }
            for (int i = 1; i < n - 1; i++)
            {
                if (s[i - 1] == '0' && s[i] == '1')
                {
                    count++;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}