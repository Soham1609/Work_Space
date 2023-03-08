#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>

int main()
{

    string str1;
    cin >> str1;
    int count;
    cin >> count;
    bool flag = 0;

    string ch;
    for (int i = 0; i < count; i++)
    {
        cin >> ch;
        for (int i = 0; i < str1.length(); i++)
        {
            if (str1.find(ch[i]) != string::npos)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
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