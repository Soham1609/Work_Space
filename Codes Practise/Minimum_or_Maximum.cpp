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
// using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a;
        int arr[a];
        int test[a];
        int ans[a];
        bool flag = 0;

        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            // test[i] = arr[i];
        }
        int max = 0, min = 0;
        for (int i = 0; i < a; i++)
        {
            max = *max_element(arr, arr + (i+1));
            min = *min_element(arr, arr +( i+1));
            if (max == arr[i] || min == arr[i])
            {
                continue;
            }
            else
            {
                flag =1;
                cout<<"NO"<<endl;
                break;
            }
            
        }
        if (flag ==0)
        {
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}
// bool flag = 0;
// sort(test, test + a);
// for (int i = 0; i < a; i++)
// {
//     if (test[i] != arr[i])
//     {
//         cout << "NO" << endl;
//         flag = 1;
//         break;
//     }
// }
// if (flag == 0)
// {
//     cout << "YES" << endl;
// }