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
        long int count, sar, anu;
        cin >> count >> sar >> anu;
        string vals;
        long int srSar = 0, srAnu = 0;

        for (int i = 0; i < count; i++)
        {
            cin >> vals;
            vals[0];

            // if (vals[0] == "E" || vals[0] == "U" vals[0] == "I" || vals[0] == "N" || vals[0] == "O" || vals[0] == "X" || vals[0] == "Q")
            if (vals[0] == 'E' || vals[0] == 'U'|| vals[0] == 'I' || vals[0] == 'N' || vals[0] == 'O' || vals[0] == 'X' || vals[0] == 'Q')
            {
                srSar = srSar + sar;
            }
            else
            {
                srAnu = srAnu + anu;
            }
        }
        if (srAnu == srSar)
        {
            cout << "DRAW" << endl;
        }
        else if (srAnu > srSar)
        {
            cout << "ANURADHA" << endl;
        }
        else
        {
            cout << "SARTHAK" << endl;
        }
    }
    return 0;
}