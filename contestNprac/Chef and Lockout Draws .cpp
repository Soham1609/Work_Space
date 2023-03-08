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
        int a ,b,c ;
        if (a+b == c or b+c == a or a+c == b)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        

    }
    return 0;
}