// #include <iostream>
// using namespace std;
// #include <math.h>
// #include <stdio.h>
// // #include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include <math.h>
int main()
{

    string str1, str2;
    cin >> str1 >> str2;
    int count = 0;
    int len1 = str1.length() ;
    int len = str2.length();
    for (int i = 0; i < len1- len+1; i++)
    {   
        if (str1.substr(i, len) == str2)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

// int main()
// {

//     string str1, str2;
//     cin >> str1 >> str2;
//     int count = 0;
//     int len = str2.length()-1;
//     cout<<len<<endl;
//     for (int i = 0; i < str1.length() - len; i++)
//     {
//         if (str1.substr(i, i + len) == str2)
//         {
//             cout<<str1.substr(i, i + len) ;
        
//             count++;
//         }
//     }
//     cout << count << endl;
//     return 0;
// }