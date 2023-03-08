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
        int a , b, c;
        cin>>a>>b>>c;
        a= a*5;
        b= b*10;
        int sum = a+b;
        cout<<sum/c<<endl;

    }
    return 0;
}