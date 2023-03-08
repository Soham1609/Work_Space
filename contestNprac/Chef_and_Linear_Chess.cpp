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
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        long long ans = INT_MAX,index=-1;
        // cin>>ans;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (k % val == 0 && k / val <= ans)
            {
                ans = k / val;
                index= val;
            }
        }
        if (ans == INT_MAX)
        {
            cout << index << endl;
        }
        else
        {
            cout << index << endl;
        }
    }
    return 0;
}