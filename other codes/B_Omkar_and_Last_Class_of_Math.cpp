#include <vector>
#include <iostream>
#include <cstring>
// #include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n / 2 << " " << n / 2 << endl;
        }
        else
        {
            int i = 0;
            int ans1 = 1, ans2 = n - 1, lcm = n - 1;
            for (int i = 2; i<=n/2; i++)
            {
                if (n%i == 0)
                {
                    
                    ans1 = i;
                    ans2 = n - i;
                }
                
                // int check = i * (n - i) / (__gcd(i, (n - i)));
                // if (check < lcm)
                // {
                //     lcm = check;
                //     ans1 = i;
                //     ans2 = n - i;
                // }
            }
            cout << ans1 << " " << ans2 << endl;
        }
    }
}
