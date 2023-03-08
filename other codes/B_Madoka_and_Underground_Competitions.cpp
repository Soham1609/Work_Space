#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc int t;cin>>t;while(t--)
#define ll long long
#define ios  cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
        
#define fora(mp) for(auto x :mp); 
void BADjX(){
        ll int n,k,r,c;
        cin>>n>>k>>r>>c;
        ll int x=( r)%k; 
        ll int y = c%k;
        // int x1 = max(x,y);/
       ll int finaly = x-1;
        x=1;

        y = y+finaly; 
        // ll int arr[n*n];

        // for (int i = 0; i < n; i++)
        // {
            
        // }
        // int i = 0;
        // int j=0;
ll int val =x+y-2;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n   ; j++)
    {
        int test1 = i+j;
        if (test1 %k == val%k  )
        {
            cout<<"X";
        }
        else
        {
            cout<<".";
        }
        
        
    }
    cout<<endl;
    
}

        ll counter = n*(n/k);
        while (counter--)
        {

            
        }
        
        

}
int main()
{
    ios
    tc
    BADjX();
    return 0;
}