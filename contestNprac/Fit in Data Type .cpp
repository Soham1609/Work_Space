#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a >= b && b>=0)
        {
            cout << b << endl;
        }
        else if (b >= 0)
        {
            cout <<b%(a+1) << endl;
        }
    }
    return 0;
}