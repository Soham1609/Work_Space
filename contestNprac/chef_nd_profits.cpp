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
        int x ,y,z;
        cin>>x>>y>>z;
        cout<<x*(z-y)<<endl;

    }
    return 0;
}