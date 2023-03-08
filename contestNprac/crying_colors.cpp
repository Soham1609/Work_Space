#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>

int main()
{
    int t;
    cin >> t;
    // int r1,r2,r3;
    // int g1,g2,g3 ;
    // int b1,b2,b3;
    int a[9], total;

    while (t--)
    {
        cin>>total;
        for (int i = 0; i < 9; i++)
        {
            cin>>a[i];
        }
        cout<<a[1]+a[2]+a[5]<<endl;
        

    }
    return 0;
}