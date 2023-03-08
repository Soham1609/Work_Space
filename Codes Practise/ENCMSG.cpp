#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>

void reciprcalString(string word, int n)
{
    char ch;
    for (int i = 0; i < n; i++)
    {
       
        if (islower(word[i])) {
            ch = 'z' - word[i] + 'a';
            cout << ch;
        }
    }
    cout<<endl;
}
    int main()
    {
        int t;
        cin >> t;

        while (t--)
        {
            int n;
            cin >> n;
            string a;
            cin >> a;
            // string temp ;
            for (int i = 0; i < n; i+2)
            {
                if (a[i+1] )
                {
                swap(a[i], a[i+1]);
                }
                
            }
            reciprcalString(a , n);
            
        }
        return 0;
    }