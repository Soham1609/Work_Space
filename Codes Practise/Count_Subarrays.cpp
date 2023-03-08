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
        int n;
        cin >> n;
        int arr[n];
        ll int ans;
        ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        count = 0;
        // cout << ans;
        for (int i = 0; i < n; i++)
        {
            count++;
            if (arr[i] > arr[i + 1] && i != n - 1)
            {
                ans = ans + ((count) * (count + 1) / 2);
                count = 0;
            }
        }
        ans = ans + ((count) * (count + 1) / 2);

        // cout<<n + count *(count+1)/2<<endl;
        cout << ans << endl;

        // int ans =n;
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = i;j < n; j++)
        //     {
        //         if (arr[i]<arr[j])
        //         {
        //             ans++;
        //         }

        //     }

        // }
        // cout << ans << endl;
    }
    return 0;
}