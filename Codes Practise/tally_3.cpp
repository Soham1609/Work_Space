
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

// void index(int x , int count){
//     int i = 0;
//     while (i < count)
//     {
//         if (arr[i] == elem) {
//             break;
//         }
//         i++;
//     }
// }
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int test[n];
    bool flag = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            // ans[count] = arr[i];
            test[count] = arr[i];
            count++;
        }
    }

    int start = test[0];
    int end = test[count];

    int i2 = 0;
    while (i2 < count)
    {
        if (test[i2] == start)
        {
            break;
        }
        i2++;
    }
    int start_index = i2 + 1;
    int j = 0;
    while (j < count)
    {
        if (test[j] == end)
        {
            break;
        }
        j++;
    }
    int end_index = j - 1;

    int ans[count];
    int final[count];
    for (int i1 = start_index; i1 < end_index; i1++)
    {
        cin>>ans[i1];
        cin>>final[i1];

    }
    sort(ans, ans+count);
    for (int i = 0; i < count; i++)
    {
        if (ans[i]!= final[i])
        {
            flag = 1;
            break;
        }
        
    }
    if (flag == 1)
    {
        cout<<-1<<endl;
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            cout<<final[i]<<endl;
        }
        
    }
    
    
    

    return 0;
}
