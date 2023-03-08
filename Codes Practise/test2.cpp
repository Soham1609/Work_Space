#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>

int gcdfn(long long int a,long long int b){
    if(b==0)
    return a;
    return gcdfn(b,a%b);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a,b,lcm;
        if(n%2!=0){
             a=n/2;
             b=a+1;
             lcm=(a*b)/gcdfn(a,b);
            cout<<lcm-gcdfn(a,b)<<endl;;
            
        }
        else{
            if(n==2){
                cout<<0<<endl;
            }
            else if((n/2)%2!=0){
                 a=(n/2)-2;
                 b=(n/2)+2;
                 lcm=(a*b)/gcdfn(a,b);
                cout<<lcm-gcdfn(a,b)<<endl;
            }
            else{
                 a=(n/2)-1;
                 b=(n/2)+1;
                 lcm=(a*b)/gcdfn(a,b);
                cout<<lcm-gcdfn(a,b)<<endl;
            }
        }
    }
	// your code goes here
	return 0;
}