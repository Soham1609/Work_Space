#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc int t;cin>>t;while(t--)
#define ll long long
#define ios  cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
        
void SohamX(){
        int n;
        cin>>n;
        n  =n+n;
        int oddn=0 , evenn =0;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin>>k;
            if (k%2 ==0)
            {
                evenn++;
            }
            else
            {
                oddn++;
            }

            
            
        }
        if (evenn == oddn)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
        
        
}
int main()
{
    ios
    tc
    SohamX();
    return 0;
}