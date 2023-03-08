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
        int n, m, k;
        cin >> n >> m >> k;
        int arr[n];
        int first[m], second[k];
        map<int, int> mp;
        for (int i = 0; i < m; i++)
        {
            // cin>>first[i];
            int k;
            cin >> k;
            mp[k]++;
        }
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            // cin>>second[k];
        }
        int count1 = 0, count2 = 0;
        for (auto x : mp)
        {
            if (x.second > 1)
            {
                count2++;
            }
            if (x.second >= 1)
            {
                count1++;
            }
        }
        cout << count2 << " " << n - count1 << endl;

        // int arr[]
    }
    return 0;
}