
// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
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
#include <algorithm>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <math.h>
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
// #include <bits/stdc++.h>
bool isPalindrome1(string S)
{

    string P = S;
    reverse(P.begin(), P.end());

    if (S == P)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int count = 0, n;
        cin >> n;
        string s, s1;
        cin >> s1;
        bool flag = 0;
        sort(s1.begin(), s1.end());
        for (int i = 0; i < n; i = i + 2)
        {
            for (int j = i; j< n; j = j+2)
            {
                if (s1[i]==  s1[j+2] )
                {
                    flag =1;
                    break;
                }
            }
            if (s1[i] != s1[i + 1]  || flag ==1 )
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
