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
        int k, n, temp,sum=0;
        cin >> n >> k;
        int gifts[n];
        for (int i = 0; i < n; i++)
        {
            cin>>gifts[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (gifts[i] < gifts[j])
                {
                    temp = gifts[i];
                    gifts[i] = gifts[j];
                    gifts[j] = temp;
                }
            }
        }
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i + 2)
            {
                sum = gifts[i] + sum;
            }
        }
        else
        {
            sum = gifts[n];
            for (int i = 1; i < n; i + 2)
            {
                sum = sum + gifts[i];
            }

            cout << sum << endl;
        }
    }
    return 0;
}