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
        int n, a, b, k;
        cin >> n >> a >> b >> k;
        int ans = 0;
        int start = min(a, b);
        ans = n / a + n / b + n / (a * b);

        if (ans >= k)
        {
            cout << "Win" << endl;
        }
        else
        {
            cout << "Lose" << endl;
        }
    }
    return 0;
}