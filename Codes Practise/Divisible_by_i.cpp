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
        int val = 1;
        int arr[n];
        // int x= n-1;
        arr[0] = 1;
        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 1)
            {

                val = val + n - i;
            }
            else
            {
                val = val - (n - i);
            }

            arr[i] = val;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
    return 0;
}