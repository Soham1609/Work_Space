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
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
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
    std::vector<int> vec;
    std::string buffer;
    int data;
    std::getline(std::cin, buffer);
    std::istringstream iss(buffer);
    while (iss >> data)
    {
        vec.push_back(data);
    }
    int x = vec.size();
    int arr[x];
    set<int> s;
    for (int i = 0; i < vec.size(); i++)
    {
        arr[i] = vec.at(i);
    }
    int count = 1;
    sort(arr, arr + x, greater<int>());
    if (x >= 3)
    {
        for (int i = 0; i < x; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                count--;
            }
            if (count == 3)
            {
                cout << arr[i] << endl;
            }

            count++;
        }
    }
    else 
    {
        cout<<arr[0]<<endl;
    }

    return 0;
}