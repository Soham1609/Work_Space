#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include <sstream>

#include <bits/stdc++.h>
#include<vector>

//  void parseI(string str) {

//     // return ;
    
// }

int main()
{
   string str = "33,44,55";
//    parseI(a);
	int len = str.length();
    int b= 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ',')
        {
            for (int b; b<i; b++)
            {
                cout<<"hello";
                cout<<str[b];
            }
            b=i+1;
            // cout<<endl<<"ss";
        }
        
    }
//    vector<int> integer = parseInts(a);
    // for (int i = 0; i < integer.size(); i++)
    // {
    //     cout<<integer[i]<<endl;
    // }
    // if (a[0]=='3')
    // {
    //     /* code */
    //     cout<<"dvdsfv";
    // }
    
    
}