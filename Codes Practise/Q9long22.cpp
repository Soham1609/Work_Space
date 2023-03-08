
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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        long long int sum, sum2;
        sum = 0;
        sum2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 1)
            {
                sum = sum + arr[i] - 1;
                sum2 = sum2 + arr[i] - 2;
            }
        }
        if (arr[0] == 1 && arr[1] == 1)
        {
            if (sum % 2 == 0)
            {
                cout << "CHEFINA" << endl;
            }
            else
            {
                cout << "CHEF" << endl;
            }
        }
        else if (arr[0] = 1 && arr[1] != 1)
        {
            if (sum % 2 != 0)
            {
                cout << "CHEFINA" << endl;
            }
            else
            {
                cout << "CHEF" << endl;
            }
        }
        else
        {
             if (sum % 2 == 0)
            {
                cout << "CHEFINA" << endl;
            }
            else
            {
                cout << "CHEF" << endl;
            }
        }
        

        // if (arr[0] == 1 && arr[1] == 1 || arr[0] != 1 && arr[1] != 1)
        // {
        //     if (sum % 2 != 0)
        //     {
        //         cout << "CHEFINA" << endl;
        //     }
        //     else
        //     {
        //         cout << "CHEF" << endl;
        //     }
        // }
        // else
        // {
        //     if (sum % 2 == 0)
        //     {
        //         cout << "CHEFINA" << endl;
        //     }
        //     else
        //     {
        //         cout << "CHEF" << endl;
        //     }
        // }
    }
    return 0;
}
// if (arr[0] == 1 && arr[1]==1)
// {
//     cout << "CHEFINA" << endl;
// }