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
        int n;
        cin>>n;
        string s;
        int startcount=0 , lcount=0 ;
        for (int i = 0; i < n; i++)
        {
            cin>>s;
            if (s== "START38")
            {
                startcount ++;
            }
            else
            {
                lcount++;
            }
            

        }
        cout<<startcount <<" "<<lcount<<endl;
        
    }
    return 0;
}