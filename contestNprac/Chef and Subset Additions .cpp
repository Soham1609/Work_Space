#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n], b[n];
        string ans = "YES";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if ( x == b[i]-a[i] or y == b [i]-a[i] )
            {
                ans = "YES";
            }
            else{
                ans = "NO";
                break ;
            }
            
        }
        cout<<ans<<endl;
    }
    return 0;
}