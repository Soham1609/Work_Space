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
#include <iostream>

class hotel
{
public:
    string name;
    int price;
    float ratin;
    hotel()
    {
        cin >> name >> price >> ratin;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int n1;
        cin >> n;
        cin >> n1;
        hotel obj[n];

        while (n1--)
        {
            int low, high;
            float rate = -1;
            cin >> low >> high;
            string ans = "";
            for (int i = 0; i < n; i++)
            {
                if (low <= obj[i].price && obj[i].price  <= high)
                {
                    if ((obj[i].ratin) >= rate)
                    {
                        rate = obj[i].ratin;
                        ans = obj[i].name;
                    }
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}