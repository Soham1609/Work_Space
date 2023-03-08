
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
        int a, b, c, ans, val, x, y;
        // cin>>a>>b>>x>>y;
        cin >> a >> b;
        if (a == 1 || b == 1)
        {
            if (a > b)
            {
                cout << a << endl;
            }
            else
            {
                cout << b << endl;
            }
        }
        else if (a % 2 == 1 && b % 2 == 1)
        {
            cout << a + b - 1 << endl;
        }

        else if (a % 2 == 0 && b % 2 == 0)
        {
            cout << 0 << endl;
        }
        else if ((a % 2 == 1 && b % 2 == 0))
        {
            cout << b << endl;
        }
        else if ( (a % 2 == 0 && b % 2 == 1))
        {
            cout<<a<<endl;

        }
        
        else
        {
            
        }
    }
    return 0;
}
