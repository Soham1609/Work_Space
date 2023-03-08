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
        vector<int> vec(n);
        vector<int> vec2(n);
        for (int i = 0; i < n; i++)
        {
            int tk;
            cin >> tk;
            vec.push_back(tk);
            vec2.push_back(tk);
        }
        int x = 0;
        int f, l, test, indexf = 9999986, indexs;
        int flag=0;
        sort(vec2.begin(), vec2.end());
        for (int i = 0; i < n; i++)
        {
            x = vec2[i];
            auto f = find(vec.begin(), vec.end(), x);
            indexs = distance(vec.begin(), f);
            // cout<<f<<endl;
            // cout<<indexs<<endl;
            if (indexs < indexf)
            {
                indexf = indexs;
                cout<<indexs<<endl;
            }
            else if (indexs > indexf)
            {
                indexf = 999999;
                flag ++;
            }
        }
        if (flag<=1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
    return 0;
}