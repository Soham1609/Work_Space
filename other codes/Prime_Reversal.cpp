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

const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];

#define fora(mp)      \
    for (auto x : mp) \
        ;


bool iprime(int n)
{
    // Assumes that n is a positive natural number
    // We know 1 is not a prime number
    if (n == 1)
    {
        return false;
    }

    int i = 2;
    // This will loop from 2 to int(sqrt(x))
    while (i * i <= n)
    {
        // Check if i divides x without leaving a remainder
        if (n % i == 0)
        {
            // This means that n has a factor in between 2 and sqrt(n)
            // So it is not a prime number
            return false;
        }
        i += 1;
    }
    // If we did not find any factor in the above loop,
    // then n is a prime number
    return true;
}

void BADjX()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    vector<int> vec;
    bool flag = 0;
    int prev = 0, curr = 0;
    // int ans = 2;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        // cout<<prev <<" "<<i<<endl;

        if (a[i] != b[i] && flag == 0)
        {
            prev = i;
            flag = 1;
        }
        else if (a[i] != b[i])
        {
            vec.push_back(i - prev + 1);
            // prev = i;
        }
    }
    sort(vec.begin(), vec.end());
    string ans = "YES";
    int val = 0;
    // cout<<vec.size()<<endl;
    if (vec.size() == 1)
    {
        int x = vec[0];
        int l = x - 0;
        int r = n - 1 - x;
        if (!(iprime(l) || iprime(r)))
        {
            ans = "NO";
        }
    }
    else
    {
        for (int i = 0; i < vec.size(); i++)
        {
            // cout<<vec[i]<<endl;
            if (!iprime(vec[i]))
            {
                ans = "NO";
                break;
            }
        }
    }
    cout << ans << endl;
    
}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}
