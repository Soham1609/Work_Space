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

void SohamX()
{
    int n;
    cin >> n;
    // string s;
    char s[n];
    char a[n];
    a[1] = 'i';
    a[2] = 'm';
    a[3] = 'r';
    a[4] = 'u';
    a[0] = 'T';
    string ans = "YES";
    if (n != 5)
    {
        string s1;
        cin>>s1;
        ans = "NO";
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            // cout<<s
            // cout<<s[i]<<endl;
        }
        sort(s, s + n);
        for (int i = 0; i < n; i++)
        {
            // cout<<s[i]<<endl;
            if (s[i] != a[i])
            {
                ans = "NO";
                break;
            }
        }
    }

    cout << ans <<endl;
}
int main()
{
    ios
        tc
        SohamX();
    return 0;
}