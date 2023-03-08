#include <iostream>
#include <algorithm>


using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int b , c ;
        cin>>b>>c;
        
        int d;
        d= __gcd(b,c);
        cout<<c/d<<endl;

    }
    return 0;
}