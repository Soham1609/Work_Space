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
        int flag = 0;
        int arr[n];
        int arr1[n];
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            arr[i] = k;
            arr1[i] = k;
        }
        sort(arr1,arr1=n);



        if (flag <= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}