
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
int countFreq(int arr[], int n)
{
    unordered_map<int, int> mp;
    int ans;
    ans = 0;

    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    // Traverse through map and print frequencies
    for (auto x : mp)
    {
        if (x.first <= x.second)
        {
            if (x.second >= ans)
            {
                
            ans = x.second;
            }
            
            cout << x.first << " " << x.second << endl;
        }
    }
    return ans;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        // set<int> val;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            // val.insert(arr[i]);
        }
        int ans = 0;
        int count1 = 0;
        // set<int>::iterator itr;
        // for (itr = val.begin(); itr != val.end(); itr++)
        // {
        //     // cout << *itr << " ";
        //     count1 = count(arr, arr + n, *itr);
        //     if (count1 >= *itr)
        //     {
        //         ans = count1;
        //     }
        // }

        int n1 = sizeof(arr) / sizeof(arr[0]);
        ans = countFreq(arr, n1);
        if (ans == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}
