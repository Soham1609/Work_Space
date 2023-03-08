#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int m, n, k;
        int results[n];
        cin >> n >> m >> k;
                int count0 = 0, count1 = 0, ans = k;

        for (int i = 0; i < n; i++)
        {
            cin >> results[i];
            if (results[i] == 0)
            {
                count0++;
            }
            else
            {
                count1++;
            }
        }

        if (count1 == n)
        {
            ans = 100;
            // cout << ans << endl;
        }
        else
        {
            int case2 = 0 ;
            for (int i = 0; i < m; i++)
            {
                case2 = case2 + results[i];

                // if (results[i] == 0)
                // {
                //     ans = 0;
                //     // cout << ans << endl;
                // }
            }
            if (case2 == m)
            {
                ans = k;
                /* code */
            }
            else
            {
                ans = 0;
            }
            
            
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
