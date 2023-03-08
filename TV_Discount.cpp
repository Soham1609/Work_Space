#include <iostream>
#define ll long long
#include <bits/stdc++.h>
#define tc int t;cin>>t;while(t--)
#define ll long long
#define ios  cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
        
void SohamX(){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int tv1,tv2;
        tv1 = a-c ;
        tv2 = b-d;
        int ans = min(tv1,tv2);
        if (tv1<tv2)
        {
            cout<<"First"<<endl;

        }
        else if (tv1>tv2)
        {
            cout<<"Second"<<endl;
            
        }
        else{
            cout<<"Any"<<endl;
        }
        
        
}
int main()
{
    ios
    tc
    SohamX();
    return 0;
}