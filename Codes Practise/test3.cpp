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

vector<int> factors(int num)
{
    int count  = 0;
    vector<int> answer1;
    int i = 1;

    while (i * i <= num)
    {

        if (num % i == 0)
        {
            answer1.push_back(i);

            if (num / i != i)
            {
                count++;
            }
        }
        i++;
    }

    cout << count << endl;

    return answer1;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int num1, num2;
        cin >> num1 >> num2;
        int a, b;
        if (num1 > num2)
        {
            a = num2;
            b = num1;
        }
        else
        {
            a = num1;
            b = num2;
        }

        // cin >> a >> b;
        int n = abs(b - a);
        factors(n);
        // set<int> name_set;
        // int x = 0;
        // int count = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     x = __gcd(a, b);
        //     name_set.insert(x);
        //     a++;
        //     b++;
        // }
        // for (auto i : name_set)
        // {
        //     count++;
        // }
        // cout << count << endl;
    }
    return 0;
}