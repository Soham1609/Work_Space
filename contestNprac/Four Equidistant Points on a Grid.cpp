#include <iostream>

#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int d;
        cin >> d;
        if (d % 2 == 0)
        {
            cout << "0"<< " " << d / 2 << endl;
            cout << d / 2 << " " << d << endl;
            cout << d / 2 << " 0" << endl;
            cout << d << " " << d / 2 << endl;
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}