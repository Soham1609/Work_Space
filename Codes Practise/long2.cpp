
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
        // int n;
        ll int x, y, n, r;
        cin >> x >> y >> n >> r;

        int ansx = x * n;
        int ansy = y * n;
        int diff = y - x;
        int diff2 = ansy - r;
        if (ansy <= r)
        {
            cout << 0 << " " << n << endl;
        }
        else if (ansx > r)
        {
            cout << -1 << endl;
        }
        else
        {
            int val = diff2 / diff;
            if (diff2 % diff == 0)
            {

                cout << val << " " << n - val << endl;
            }
            else
            {
                val = val + 1;
                cout << val << " " << n - val << endl;
            }
        }

        // ll int countx=0 , county=0;

        // for (int i = 0; i <= n; i++)
        // {
        //     if (x*(n-i)+ y*(i) <=r)
        //     {
        //         countx = n-i;
        //         county = i;
        //     }
        //     else
        //     {
        //         break;
        //     }

        // }
        // if (countx ==0 && county ==0)
        // {
        //     cout<<-1<<endl;
        // }
        // else
        // {
        //     cout<<countx<<" "<<county<<endl;
        // }
    }
    return 0;
}
