
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
        // int n;
        ll int a, b, x, y, n, r;
        cin >> a >> b >> n;
        ll int val = n;
        if (a % b == 0  )
        {
            cout << -1 << endl;
            continue;
        }
        // else
        // {
            if (val % a != 0)
            {
                val = n + a - val % a;
            }

            while (!(val % a == 0 && val % b != 0))
            {
                val = val + a;
                // break;
            }
            cout << val << endl;
        // }
    }
    return 0;
}