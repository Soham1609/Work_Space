
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

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, val;
        cin >> n >> val;
        int x;
        char s[n];

        if (n % 2 == 0)
        {

            x = (n / 2);
        }
        else
        {

            x = (n / 2) + 1;
        }

        char i;
        // i = 'a';
        int count = 97 + x;
        if (val <= x)
        {


            for (char i = 97; i < val; i++)
            {
                s[i - 97] = i;
                s[n - i - 97 - 1] = i;
            }
            for (int i = val; i < n-val; i++)
            {
                s[i]='a';
            }
            for (int i = 0; i < n; i++)
            {
                cout<<s[i]<<endl;
            }
            
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}