
// #include <bits/stdc++.h>
#include <iostream>
// using namespace std;
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


int setBitNumber(int n)
{
    if (n == 0)
        return 0;
 
    int msb = 0;
    n = n / 2;
    while (n != 0) {
        n = n / 2;
        msb++;
    }
 
    return (1 << msb);
}
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int main()
{
    //    cout << countSetBits(i);

    int t;
    cin >> t;

    while (t--)
    {
        int n,k;
        int bit = setBitNumber(k);
        
        int count=0;
        count = bit-1;
        if (n==1)
        {
            cout<<countSetBits(k)<<endl;
        }
        else if (n==2)
        {
            cout<<countSetBits(bit)+countSetBits(k-bit)<<endl;
        }
        else
        {
            while (n--)
            {
                
            }
            
        }
        
        
        

    }
    return 0;
}