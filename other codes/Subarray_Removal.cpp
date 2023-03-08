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
    int n;
    cin >> n;
    string s, s1;
    cin >> s >> s1;
    map<char, int> mp;
    // map<char, int> mp2;
    // for (int i = 0; i < n; i++)
    // {
    //     mp[s[i]]++;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     mp[s1[i]]++;
    // }
    // int x;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s1.size(); j++)
        {
            if (s[i] == s[j])
            {
                mp[s[i]]++;
                break;
                // x++;
                // s.erase(remove(s.begin(), s.end(), s[i]), s.end());
                // s1.erase(remove(s1.begin(), s1.end(), s1[i]), s1.end());
                // break;
            }
        }
    }
    int count;
    for(auto x: mp){
        int num = x.second;
        if (num<count)
        {
            count = num;
        }
        
    }
    cout<<count<<endl;

}
int main()
{
    ios
        tc
        BADjX();
    return 0;
}