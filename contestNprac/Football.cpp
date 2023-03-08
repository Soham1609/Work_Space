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
        int n;
        cin >> n;
        int goals[n], penalties[n], scores[n];
        for (int i = 0; i < n; i++)
        {
            cin >> goals[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> penalties[i];
        }
        for (int i = 0; i < n; i++)
        {
            scores[i] = goals[i] * 20 - penalties[i] * 10;
        }
        int max = scores[0];

        for (int i = 1; i < n; i++)
            if (scores[i] > max)
                max = scores[i];

        if (max < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << max << endl;
        }
    }
    return 0;
}