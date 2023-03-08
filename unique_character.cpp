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
    string s = "lovelleetcode";
    int n = s.length();
    string s1 = s;
    int arr[26];
    for (int i = 0; i < n; i++)
    {
        arr[i] = -1;
    }

    for (int i = 0; i < s.length(); i++)
    {
        cout <<  s[i]-97<< endl;
        if (arr[s[i] - 97] > 1)
        {
            continue;
        }
        else
        {
            int x = count(s.begin(), s.end(), s[i]);
            // if ()
            // {
            //     /* code */
            // }
            
            // s = s1;
            cout<<x<<endl;
            if (x == 1)
            {
                return i;
            }
            else
            {
                arr[s[i] - 97] = x;
            }
        }
    }
    return -1;
}

int main()
{
    ios
        tc
        SohamX();
    return 0;
}