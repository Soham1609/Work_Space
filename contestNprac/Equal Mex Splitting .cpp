#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                count++;
            }
        }
        sort(a, a + n);
        if (count ==0)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<count<<endl;
        }
        
        
    }
}