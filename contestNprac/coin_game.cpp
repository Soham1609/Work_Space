#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>

int main()
{
    int n ,odd,even;
    cin>>n;
    int a[n];
    for (int i = 1; i < n+1; i++)
    {
        cin>>a[i];
    }
    int j =1;
    for (int j = 1; j < n+1;  j+=2 )
    {
        odd = odd + a[j];
        if (j+1<n+1)
        {
            even = even +a[j+1];
        }
        
    }
    if (odd<even)
    {
        cout<<odd*2;
    }
    else{
        cout<<even*2;
    }
    
    
    
}
