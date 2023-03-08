// C++ program to print all
// permutations with duplicates allowed
#include <bits/stdc++.h>

using namespace std;

bool permute(string b,string a, int l, int r)
{

    // Base case

    if (l == r)

        cout << a << endl;

    else

    {

        for (int i = l; i <= r; i++)

        {

            swap(a[l], a[i]);

            permute(a, l + 1, r);

            swap(a[l], a[i]);
        }
    }
}

// Driver Code

int main()
{

    string str;
    cin >> str;
    int t;
    cin >> t;
      int n = str.size();

    permute(str, 0, n - 1);
    while (t--)
    {
string s;
cin>>s;
if (permute (s,str,0,n-1))
{
    /* code */
}

    }

  

    return 0;
}