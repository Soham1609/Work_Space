#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
// #include <bits/stdc++.h>
#include <algorithm>
#include <numeric>

// CPP program to illustrate
// std::lcm function of C++
#include <iostream>
#include <numeric>
  
using namespace std;
  


int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int x = n * k;

        int ans =std::lcm(10, 20);

        cout << ans / k << endl;
    }
    return 0;
}