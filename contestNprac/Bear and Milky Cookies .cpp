#include <iostream>
using namespace std;
#include <math.h>
#include <string>
#include <stdio.h>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string breakfast[n], ans = "YES";
        for (int i = 0; i < n; i++)
        {
            cin >> breakfast[i];
        }
        if (n != 1 or breakfast[0] ==  "milk")
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (breakfast[i] == "cookie" and breakfast[i + 1] != "milk")
                {
                    ans = "NO";
                }
            }
        }
        else
        {
            ans = "NO";
        }
        cout << ans << endl;
    }
    return 0;
}