#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc int t;cin>>t;while(t--)
#define ll long long
#define ios  cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
// #define int dp[1000000000] 
        
void SohamX(){
        int n,a,b;
        cin>>n;
        string ans="NO";
        for (int i = 1; i*i <= n; i++)
        {
            if ((n-2*i)%(i+2) ==0 && n!=2*i)
            {
                ans ="YES";
            }
            
        }
        
        // a=1;
        // b=1;
        // cin>>n;
        // if ((n%3 ==2 || n%4 ==0 )&& n>4)
        // {
        //     ans ="YES";
        // }
        
        // else if (n>4)
        // {
        //     int x= n/3;
        //     while (a*a <= n)
        //     {
        //         for (int b = a; b <= x-a; b++)
        //         {
        //             int val3 = (a*b +2*a+2*b );
        //             if(val3>n){
        //                 break;
        //             }
                    
        //             if ((a*b +2*a+2*b ) ==n)
        //             {
        //                 ans = "YES";
        //             }
        //             if(val3>n){
        //                 break;
        //             }
                    
        //         }
        //         a++;
        //     }
            
        //     // for (int a = 1; a <= x; a++)
        //     // {
                
                
        //     // }
            
        // }
        // else
        // {
            
        // }
        
        cout<<ans<<endl;
        
        // while ((a*b +2*a+2*b ) <=n)
        // {
        //     while ((a*b +2*a+2*b ) <=n)
        //     {
        //         b++;

        //     }
            
        // }
        
}
int main()
{
    ios
    tc
    SohamX();
    return 0;
}