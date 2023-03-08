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
         int count = 0;
	    string s;
	    cin>>s;
	    char temp='0';
	    for(int i = 0 ; i < s.length() ; i++){
	        if(s[i]=='0'&&temp=='0'){
	            count++;
	            temp = '1';
	        }
	        if(s[i]=='1'&&temp =='1'){
	            count++;
	            temp = '0';
	        }
	    }
	    cout<<count<<endl;
    }
    return 0;
}
