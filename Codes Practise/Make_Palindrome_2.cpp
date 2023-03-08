
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
        string s, s1, s2, ans;
        int n;
        cin >> n;

        cin >> s;
        if (n % 2 == 1)
        {
            ans = s[n / 2];
            s.erase(n / 2, 1);
            for (int i = 0; i < n / 2; i++)
            {
                s1 = s1 + s[i];
            }
            for (int i = n / 2 + 1; i < n; i++)
            {
                s2 = s2 + s[i];
            }
        }
        else
        {
            for (int i = 0; i < n / 2; i++)
            {
                s1 = s1 + s[i];
            }
            for (int i = n / 2; i < n; i++)
            {
                s2 = s2 + s[i];
            }
        }
        reverse(s2.begin(), s2.end());
        cout << s1 << endl;
        cout << s2 << endl;
        cout<<ans<<endl;
        string ans1 , ans2;

        for (int i = 0; i < n / 2; i++)
        {

            if (s1[i] == s2[i])
            {
                // ans = s[i] + ans + s2[i];
                ans1 = s1[i]+ans1;
                ans2 = ans2 +s2[i];
            }
        }
        cout << ans1 +ans +ans2<< endl;
    }
    return 0;
}
