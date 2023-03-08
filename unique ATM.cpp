#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;



int main()
{
    int n ;
    cin>>n;
    int temp = n +1, count =0;
    while (temp !=0)
    {
        if (temp%10 == 0)
        {
            temp = temp/10;
            count++;
        }
        else
        {
            temp =temp +1 ;
            count++;
        }
    }
    cout<<count;
    


}