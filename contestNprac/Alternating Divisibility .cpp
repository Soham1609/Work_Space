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
        a[0] = 3;
        a[1] = 6;
        cout << 1 << " " << 2 << " ";

        int count = 4;
        for (int i = 2; i < n; i++)
        {
            if (i % 2 == 0)
            {
                a[i]=count;
                // cout << count << " ";
                count++;
            }
            else
            {
                a[i] = count * 2;
                // cout<<count*2<<" ";
            }
        }
        if (n > 2)
        {
            for (int i = 0; i < n - 2; i++)
            {
                cout << a[i] << " ";
            }
        }

        // for (int i = 0; i < n - 2; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // int a[n];
        // int nextval = 3, currentval = 1;
        // // a[0] = 1;
        // // a[1]= 2;
        // int count =2;
        // if (n > 1)
        // {
        //     for (int i = 0; i < n; i++)
        //     {
        //         a[i] = nextval;
        //         // currentval = nextval;
        //         if (i % 2 == 0)
        //         {
        //             nextval = nextval *2;
        //         }
        //         else if (i%2 ==1)
        //         {
        //             count++;
        //             nextval = count ;
        //         }
        //     }
        // }

        // switch (n)
        // {
        // case 1:
        //     // code block
        //     cout << 2 ;
        //     break;

        // default:
        //     for (int i = 0; i < n; i++)
        //     {
        //         cout<<a[i]<<" ";
        //     }

        // }
        cout << endl;
    }
}