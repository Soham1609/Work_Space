#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>

int main()
{
    int t;
    cin >> t;
    int sum , n ;

    while (t--)
    {
        cin>>n;
        sum = n%10;
        while (n>9)
        {
            n = n/10;
        }
        sum = sum +n;
        cout<<sum<<endl;


    }
    return 0;
}
