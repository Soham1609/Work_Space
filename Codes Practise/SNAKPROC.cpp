#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
// #include <bits/stdc++.h>

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int len;
        cin >> len;
        string snake;
        cin >> snake;
        int part = 0;

        for (int i = 0; i < len; i++)
        {
            if (snake[i] == 'H' && part == 0)
            {
                part = 1;
            }
            else if (snake[i] == 'T' && part == 1)
            {
                part = 0;
            }
            else if (snake[i] == '.')
            {
                continue;
            }
            else
            {
                part = -1;
                break;
            }
        }
        if (part == -1)
        {
            cout << "Invalid";
        }
        else if (part == 0)
        {
            cout << "Valid";
        }
        else
        {
            cout << "Invalid";
        }
    }
    return 0;
}