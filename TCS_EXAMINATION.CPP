#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>

int main()
{
    int t;
    cin >> t;
    int a1, a2, a3, TOTAL1, TOTAL2;
    int b1, b2, b3;
    bool winner;

    while (t--)
    {
        cin >> a1 >> a2 >> a3; // a = dragon
        cin >> b1 >> b2 >> b3; // b =sloth
        TOTAL1 = a1 + a2 + a3;
        TOTAL2 = b1 + b2 + b3;
        if (TOTAL1 == TOTAL2)
        {
            if (a1 > b1)
            {
                cout << "DRAGON" << endl;
            }
            else if (a1 < b1)
            {
                cout << "SLOTH" << endl;
            }

            else if (a2 > b2)
            {
                cout << "DRAGON" << endl;
            }
            else if (b2 > a2)
            {
                cout << "SLOTH" << endl;
            }

            else if (a1 == b1 and a2 == b2 and a3 == b3)
            {
                cout << "TIE" << endl;
            }
            else
            {
                cout << "SLOTH" << endl;
            }
        }
        else if (TOTAL1 > TOTAL2)
        {

            cout << "DRAGON" << endl;
        }
        else
        {
            cout << "SLOTH" << endl;
        }
    }
    return 0;
}