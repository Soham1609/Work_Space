#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>

int main()
{
    string give, check;
    cin >> give;
    int tests;
    cin >> tests;
    bool flag = 0;
    for (int i = 0; i < tests; i++)
    {
        cin >> check;
        for (int i = 0; i < check.length(); i++)
        {
            if (give.find(check[i]) != string ::npos)
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
            
        }
        
    }

    return 0;
}