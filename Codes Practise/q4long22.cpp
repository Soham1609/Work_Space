

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
        long long int t1, n, maxs;
        cin >> t1 >> n >> maxs;
        long long int ans;
        ans = 0;

        while (t--)
        {
            if (n <= maxs)
            {
                ans = n * n + ans;
            }
            else if (maxs > 0)
            {
                ans = ans + maxs * maxs;
            }
            else
            {
                break;
            }
            maxs = maxs - n;
        }
        cout << ans << endl;
    }
    return 0;
}

// long long int times = 0, remainder1 = 0;
// long long int sum = 0;
// while (sum < s && t1--)
// {
//     s = s - n;
//     if (s > n)
//     {
//         sum = sum + n * n;
//     }
//     else
//     {
//         sum = sum + s*s;
//     }
// }
// cout<<sum<<endl;

// times = s / n;
// remainder1 = s % n;
// long long int newN = n * n;
// long long ans;
// ans = 0;
// if (times < t)
// {
//     ans = times * newN + remainder1 * remainder1;
// }
// else
// {
//     ans = t * newN + remainder1 * remainder1;
// }

// cout << ans << endl;
// }
