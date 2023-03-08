#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define ll long long
#define ios                     \
    cin.sync_with_stdio(false); \
    cin.tie(0);                 \
    cout.tie(0);
using namespace std;

int SohamX()
{
    ll int a, b, c, d;
    cin >> a >> b >> c >> d;
    ll int num1 = a * d, num2 = b * c;
    float result;
    if (min(num1, num2) != 0)
    {

        result = max(num1, num2) / min(num1, num2);
    }
    if (num1 == 0 && num2 == 0)
    {
        return 0;
    }
    else if (num1 == 0 && num2 != 0)
    {
        return 1;
    }
    else if(num1 != 0 && num2 == 0)
    {
        return 1;
    }
    

    if (max(num1, num2) % min(num1, num2) == 0 && result == 1)
    {
        return 0;
    }
    else if (max(num1, num2) % min(num1, num2) == 0)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x = SohamX();
        cout << x << endl;
    }

    return 0;
}