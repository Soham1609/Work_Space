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
        int n, m, c,ans=0;
        cin >> n >> m >> c;
        for (int i = 2; i <= n; i++)
        {
            if (c%i ==0 && c/i <=m)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}