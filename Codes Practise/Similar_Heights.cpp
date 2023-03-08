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
// class do_it{
// public :
// int a , count;
// do_it(){

// }
// };

int main()
{
    int t;
    cin >> t;
    long long int ans = 0;

    while (t--)
    {
        ans = 0;
        long long int n;
        cin >> n;
        long long int arr[n];
        bool flag1 = 0, flag2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        if (arr[0] != arr[1])
        {
            ans++;
        }
        if (arr[n - 1] != arr[n - 2])
        {
            ans++;
            flag1 = 1;
        }

        for (int i = 1; i < n - 1; i++)
        {
            if ((arr[i] != arr[i - 1]) && (arr[i] != arr[i + 1]))
            {
                ans++;
            }
            if ((arr[i] == arr[i - 1]) && (arr[i] == arr[i + 1]))
            {
                flag2 = 1;
            }
        }

        if (ans % 2 == 1)
        {
            if (ans == 1 && flag2 != 1 && flag1 == 1)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << (ans / 2) + 1 << endl;
            }
        }

        else
        {
            cout << ans / 2 << endl;
        }
    }

    return 0;
}
// for (int i = 0; i < n; i++)
// {
//     count[i] = 1;
// }

// int x, y;
// cout << "incremented" << endl;
// cout << ans << "here" << endl;
// ans = ans +1;
// cout << "incremented" << endl;
// int count[n];
