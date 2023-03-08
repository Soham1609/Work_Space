#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>

int main()
{
    int t ,a,b,c;
    cin >> t;

    while (t--)
    {
        cin>>a>>b>>c;
        int total = a+b+c;
        if (total = 180)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        

    }
    return 0;
}