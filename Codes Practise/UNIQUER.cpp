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
        ll int a, b, p, q;
        cin >> a >> b >> p >> q;
        ll int num1 = 0, num2 = 0, cpst1 = 0, cpst2 = 0;
        bool flag = 0;
        bool flaga = 0;
        bool flagb = 0;
        if (n % a == 0 && n >= a)
        {
            num1 = n / a;
            cpst1 = num1 * p;
            flag = 1;
            flaga = 1;
        }
        if (n % b == 0 && n >= b)
        {
            num2 = n / b;
            cpst2 = num2 * q;
            flag = 1;
            flagb = 1;
        }

        if (flag ==1 && flaga == 1 && flagb == 1)
        {
            if (cpst1 >= cpst2)
            {
                cout << "YES" << endl;
                cout << cpst2 << endl;
            }
            else
            {
                cout << "YES" << endl;
                cout << cpst1 << endl;
            }
        }
        else if (flaga == 1 && flagb==0)
        {
            cout << "YES" << endl;
            cout << cpst1 << endl;
        }
        else if (flagb == 1&& flaga==0)
        {
            cout << "YES" << endl;
            cout << cpst2 << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}