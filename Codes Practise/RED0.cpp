
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
            ll int a, b;
            cin >> a >> b;
            // int x = 0;
            ll int count = 0;
            // int difff = 0, num = 0;
            // bool flag = 0;
            if (a > b)
            {
                swap(a, b);
            }
            // if (a != 0)
            // {
            //     /* code */
            //     x = b / a;
            // }

            if (a == b)
            {
                cout << a << endl;
            }
            else if (a == 0 && b!=0)
            {
                cout << -1 << endl;
            }

            else
            {
                while (a * 2 <= b)
                {
                    count++;
                    a = a * 2;
                }
                if (a == b)
                {
                    count = count + b;
                }
                else
                {
                    count = count + b + 1;
                }
                cout<<count<<endl;
            }
        }
        return 0;
    }
   