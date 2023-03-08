#include <iostream>
 #include <math.h>
#include <string>
#include <stdio.h>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count0, count1;

        count0 = 0;
        count1 = 0;

        int a;
        cin >> a;
        for (int i =0; i<100 and a!=0 ; i++ )
        {
            int val;
            val = a % 10;

            if (val == 0)
            {
                count0++;
            }
            else
            {
                count1++;
            }
            a = a / 10;
        }
        if (count0 == 1 or count1 == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}