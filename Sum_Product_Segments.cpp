#include <iostream>
#include <stdio.h>
#define ll long long
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
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
        ll int a1, a2, b1, b2;
        bool flag = 0;
        // int vall;

        if (a % 2 == 0)
        {
            a1 = a / 2;
            a2 = a / 2;
            // a2
            // cout<<a/2 << " "<<a/2 <<endl;
        }
        else
        {
            a1 = a / 2;
            a2 = a / 2 + 1;
            // cout<<a/2 <<" "<<a/2+1<<endl;
        }
        float num1 = sqrt(b);

        ll x = sqrt(b) + 1;
        // if (sqrt(b) * sqrt(b) == b * b)
        // {
        //     x = x - 1;
        // }
        // if (sqrt(a1) * sqrt(a1) == a1 * a1)
        // {
        //     y = y - 1;
        // }

        int check = 0;
        int dif1, dif2;
        dif1 = x - a2 - 1;
        dif2 = a1 - 1;
        ll y = sqrt(a)+1 ;
        for (int i = 2; i <= floor(sqrt(a))   ; i++)
        {
            if (b % i == 0 && b / i < a1)
            {
                b1 = i;
                b2 = b / i;
                flag = 1;
                break;
            }
        }

        for (int i = a2 + 1; i < x; i++)
        {
            if (b % i == 0)
            {
                b1 = i;
                b2 = b / i;
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            cout << a1 << " " << a2 << endl;
            cout << b1 << " " << b2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}