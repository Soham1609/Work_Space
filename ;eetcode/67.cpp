#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define ll long long
const int N = 1e5 + 10;
bool vis[N];
vector<int> g[N];
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

class Solution
{
public:
    string addBinary(string a, string b)
    {
        // a) 1+1+carry=0 and carry=1;
        // b)1+0+carry=1 and carry=0;
        // c)0+0+carry=0 and carry=0;

        int a1 = a.length();
        int b1 = b.length();
        int addon;

        if (a1>b1)
        {
            addon = a1-b1;
            for (int i = 0; i < addon; i++)
            {
                b1 = '0'+b1;
            }
            
        }
        else
        {
            addon = b1-a1;
             for (int i = 0; i < addon; i++)
            {
                a = '0'+a1;
            }
        }
        for (int i = 0; i < a.length(); i++)
        {
            
        }
        

        
        
    }
};
void BADjX()
{
}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}