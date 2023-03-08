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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int x, y;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i] ;
            if (arr[i] == 1)
            {
                x = i + 1;
            }
            else if (arr[i] == n )
            {
                y = i + 1;
            }
        }
        if (x > y)
        {
            y = n - y;
            x = x - 1;

            cout << x + y - 1 << endl;
        }
        else
        {
            y = n - y;
            x = x - 1;

            cout << x + y << endl;
        }
    }

    return 0;
}