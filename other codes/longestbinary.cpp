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

int ispal(string s)
{
    int n = s.length();
    string s1 = s;
    reverse(s1.begin(), s1.end());
    if (s == s1)
    {
        return n;
    }
    else
    {
        return 0;
    }
}

string longestPalindrome(string s)
{

    int n = s.length();
    int max = 0;
    string ans;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; i++)
        {
            x = ispal(s.substr(i, j - i + 1));
            if (x > max)
            {
                max = x;
                ans = s.substr(i, j - i + 1);
            }
        }
    }
    return ans;
}
string shortestPalindrome(string s)
{
    if (s.size() < 2)
        return s;
    int max_len = 0;
    int start_idx = 0;
    int n = s.size();
    int i = 0;
    int r_ptr = 0;

    string str = s;
    reverse(str.begin(), str.end());
    string ad;
    int si = 0;
    while (i < n)
    {
        if (str[i] != s[si])
        {
            ad = str[i] + ad;
        }
        else
        {
            if (str.substr(i, n - i + 1) == s.substr(i, n - i + 1))
            {
                break;
            }
        }
        if (str[i] == s[si])
        {
            i++;
            si++;
        }
        else
        {
            i++;
        }
        
        
    }
    return ad+s;

    // while (i < s.size())
    // {
    //     r_ptr = i;
    //     int l_ptr = i;
    //     // find the middle of a palindrome
    //     while (r_ptr < s.size() - 1 && s[r_ptr] == s[r_ptr + 1])
    //         r_ptr++;
    //     i = r_ptr + 1;
    //     // expand from the middle out
    //     while (r_ptr < s.size() - 1 && l_ptr > 0 && s[r_ptr + 1] == s[l_ptr - 1])
    //     {
    //         r_ptr++;
    //         l_ptr--;
    //     }
    //     int new_len = r_ptr - l_ptr + 1;
    //     if (new_len > max_len)
    //     {
    //         start_idx = l_ptr;
    //         max_len = new_len;
    //     }
    // }
    // string a = s.substr(start_idx, max_len);
    // int endp = start_idx + max_len;
    // a = s.substr(endp, s.size() - r_ptr) + a;
    // return a;
}

int main()
{
    // ios
    // tc
    // BADjX();
    // return 0;
}