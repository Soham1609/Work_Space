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
        int a , b;
        cin>>a>>b;
        int c = b-a;
        if (c %8 =0)
        {
            cout<<c/8<<endl;
        }
        else
        {
            /* code */
        cout<<c/8 +1<<endl;
        }
        
        
    }
    return 0;
}