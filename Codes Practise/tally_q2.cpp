
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
    int n;
    cin >> n;
    int arr[n];
    int ans[n];
    int test[n];
    bool flag =0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            ans[count] = arr[i];
            test[count]=arr[i];
            count++;
        }
    }

    sort(ans , ans+n);
    for (int i = 0; i < n; i++)
    {
        if (test[i]!=ans[i])
        {
            // cout<<-1<<endl;
            flag = 1;
            break;
        }
        
    }
    if (flag == 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<test[i]<<endl;
        }
        
    }
    
    


    // int a[]
    return 0;
}
