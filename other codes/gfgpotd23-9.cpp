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

#define fora(mp)      \
    for (auto x : mp) \
        ;
void BADjX()
{
}
int main()
{
    // ios
    // tc
    // BADjX();
    string s = "soham";
    s.erase(1, 2);
    int n;

    cout << s << endl;
    cout<<s.size();
    int ans = 0, count = n, prev = 0;

    // while (prev != count)
    // {
    //     prev = count;
    //     for (int i = 0; i < s.size() - 1; i++)
    //     {
    //         if (abs(s[i] - s[i + 1]) == 1)
    //         {
    //             s.erase(i, 2);
    //             i++;
    //             count = count - 2;
    //         }

    //     }

     int ans = 0, count = n, prev = 0;

    while (prev != count)
    {
        prev = count;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s.substr(i, 2) == "12"||s.substr(i, 2)== "21"||s.substr(i, 2)== "34"||s.substr(i, 2)== "43"||s.substr(i, 2)== "56"||s.substr(i, 2)== "65"||s.substr(i, 2)== "78"||s.substr(i, 2)== "87"||s.substr(i, 2)== "09"||s.substr(i, 2)== "90")
            {
                s.erase(i, 2);
                i++;
                count = count - 2;
            }

        }
    }
    // cout<<count<<endl;
    return count;

    //     /* code */
    // }
    // cout<<count<<endl;

    return 0;
}