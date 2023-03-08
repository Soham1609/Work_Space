#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>
#define ll long long 

int main()
{
   
    
    int t;
    cin >> t;

    while (t--)
    {
        ll r ,g,b;
        cin>>r>>g>>b;
        ll n;
        cin>>n;
        cout<<min (r , n-1) +min (g , n-1) +min (b , n-1) +1<<endl;
        

    }
    return 0;
}

