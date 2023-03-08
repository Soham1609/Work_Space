#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a , b , x , y , value1 , value2;
        cin>>a>>b>>x>>y;
        value1 = a*b;
        value2 = x*y;
        if (value1<=value2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        

        

    }
    return 0;
}