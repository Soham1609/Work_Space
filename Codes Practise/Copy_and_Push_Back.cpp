#include <math.h>
#include <stdio.h>
#define ll long long
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, s1;
        cin >> s;
        s1 = s;
        string x, testaa;
        bool flag = 0, ans = 1;
        if (s[0] == s[1])
        {
            x = s[0] + s[1];
            flag = 1;
        }
        int i = 0;

        while (i < n)
        {
            testaa = s[i] + s[i + 1];
            if (s[i] == s[i + 1])
            {
                if ((s[i] == s[i + 1]) && x == testaa && s.substr(0, i - 1) == s.substr(i, i - 1) && ((i + i - 1) <= n - 1))
                {
                    ans = 1;
                    i = (2 * i) - 1;
                }
                else if (s[i] == s[i + 1])
                {
                    cout << "NO" << endl;
                    ans = 0;
                    break;
                }
            }
            else
            {
                if ((s.substr(0, i - 1) == s.substr(i, i - 1)) && ((i + i - 1) <= n - 1))
                {
                    i = (2 * i) - 1;
                    ans = 1;
                }
            }
            i++;
        }
        if (ans == 1)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
// if (flag == 1)
// {
//     for (int i = 0; i < n; i++)
//     {
//         testaa = s[i] + s[i + 1];
//         if ((s[i] == s[i + 1]) && x == testaa && s.substr(0, i - 1) == s.substr(i, i - 1) && ((i + i - 1) <= n - 1))
//         {
//             ans = 1;
//             // i = i+i-1;
//         }
//         else if (s[i] == s[i + 1])
//         {
//             cout << "NO" << endl;
//             ans = 0;
//             break;
//         }
//     }
// }
// else
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (s[i] == s[i + 1])
//         {
//             cout << "NO" << endl;
//             ans = 0;
//             break;
//         }
//     }
// }