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
        int n, m;
        int x, y;
        cin >> n >> m >> x >> y;
        // cout << x << y;

        for (int i = 0; i < n; i++)
        {
            int f=0, p=0;
            for (int i = 0; i < m; i++)
            {
                char key ;
                
                cin >> key;
                if (key == 'F')
                {
                    // cout << "F increseased" << endl;
                    f = f + 1;
                }
                if (key == 'P')
                {
                    // cout << "p increseased" << endl;
                    p = p + 1;
                }
            }
            // cout << f << " " << p << endl;
            if (f >= x)
            {
                cout << 1;
            }
            else if (f >= (x - 1) && p >= y)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }
    return 0;
}