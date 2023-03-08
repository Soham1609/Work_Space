#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>

int main()
{
    int t, count =0 ;
    cin >> t;
    string s ;

    while (t--)
    {
        cin>>s;
        if (s.find("ch")<s.length()){
            count ++;

        }
        else if (s.find("he")<s.length())
        {
            count++;
        }
        else if (s.find("ef")<s.length()){
            count++;
        }

    }
    cout <<count;
    return 0;
}
