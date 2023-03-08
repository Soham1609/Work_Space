
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
// #include <bits/stdc++.h>
bool isPalindrome1(string S)
{

    string P = S;
    reverse(P.begin(), P.end());

    if (S == P)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int count = 0, n;
        cin >> n;
        int arr[n];
        int sum , sum1;
        sum = 0, sum1 =0;
        // int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum1 = sum1 + arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
            if ((n - i - 1) >= sum)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if (sum1 == 1)
        {
            
        cout<<count+1<<endl;
        }
        else
        {
            
        cout<<count<<endl;
        }
        

        // int x = sum /n;
        // int y = sum%n;
        // if (sum < n )
        // {
        //     cout<<n<<endl;
        // }
        // else if (sum)
        // {
        //     /* code */
        // }
    }
    return 0;
}