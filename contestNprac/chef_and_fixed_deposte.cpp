#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>

int main()
{
    int t;
    cin >> t;
    int n, x;

    while (t--)
    {
        cin >> n >> x;
        int a[n], temp, sum = 0, min;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }

        for (int k = 0; k < n; k++)
        {
            for (int j = k + 1; j < n; j++)
            {
                if (a[k] < a[j])
                {
                    temp = a[k];
                    a[k] = a[j];
                    a[j] = temp;
                }
            }
        }
        int num = 0, count = 0;

        if (sum < x)
        {
            cout << -1 << endl;
        }
        else
        {
            while (x > min)
            {

                min = min + a[num];
                num++;
                count++;
            }
            cout << count << endl;
        }
    }
    return 0;
}