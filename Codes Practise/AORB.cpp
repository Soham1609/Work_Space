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
        int a,b;
        cin>>a>>b;
        int val1 =( 500 - a*2) + (1000 - (a+b)*4);
        int val2 = (1000 -b*4 ) + (500 - (a+b)*2);
        if (val1 >val2)
        {
            cout<<val1<<endl;
        }
        else
        {
            cout<<val2<<endl;
        }

        
    }
    return 0;
}