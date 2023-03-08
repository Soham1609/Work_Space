#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>

int main()
{
    int t,n;
    cin >> t;
    int count = 0;

    while (t--)
    {
        cin>>n;
        int days[n];
        for (int i = 0; i < n; i++)
        {

            cin>>days[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (days[j] != days[i])
                {
                    count ++;
                }
                
            }
            
        }
        cout<<count;
    }
    return 0;
}