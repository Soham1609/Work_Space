#include <string>
using namespace std;
#include <map>
#include <bits/stdc++.h>
string smallestWindow(string str)
{
    // Complete this method
       unordered_map <char, int> mp;
    int n = str.length();
    int i = 0;
    int j = 0;
    int start = 0;
    int size = 0;
    // cout<<n<<endl;
    // while (j < n)
    // {

    //     mp[str[j]]++;

    //     if (mp.size() < j - i + 1)
    //     {
    //         mp[str[i]]--;
    //         i++;j++;
    //         continue;
    //         // mp[str[]]--;
    //     }

    //     if (mp.size() == j - i + 1)
    //     {
    //         // cout<<str.substr(start, size)<<endl;
    //         if (size < j - i + 1)
    //         {
    //             //   cout<<mp.size()<<endl;
    //             // cout<<"hit "<<endl;
    //             /* code */
    //             start = i;
    //             size = j - i + 1;
    //         }

    //     //    cout<<i<<" "<<j<<endl;
    //     } j++;

    // }
    int mark = 0;
    int prevsize = 0;
    for (int i = 0; i < n; i++)
    {
        mp[str[i]]++;
        if (mp.size() == 4)
        {
            cout<<str.substr(mark, mp.size())<<endl;
        }

        cout << mp.size() << endl;
        if (mp.size() == prevsize)
        {
            mp[str[mark]]--;
            mark++;
        }
        else
        {
            prevsize = mp.size();
            start = mark;
            size = i - mark + 1;
        }
    }
    string ans = str.substr(start, size);
    return ans;
}
int main()
{
    string x;
    cin >> x;
    cout << smallestWindow(x) << endl;

    return 0;
}