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
        int a, b = 0, bc = 0;
        cin >> a;
        int arr[a];
        int x = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (arr[i] == -1)
            {
                b++;
            }
            x = x + arr[i];
        }
        bc = a - b;
        int gap = abs(bc-b);
        if (a % 2 == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout<<gap/2<<endl;
        }
    }
    return 0;
}