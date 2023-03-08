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
        char arr1[n];
        char arr2[n];
        
        string ans ="YES";
        for (int i = 0; i < n; i++)
        {
            cin>>arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>arr2[i];
        }
        for (int i = 0; i < n; i++)
        {
            if ((arr1[i] == arr2[i])|| (arr1[i]== 'B' && arr2[i]== 'G' ) || ((arr2[i]== 'B' && arr1[i]== 'G' )))
            {
                continue;
            }
            else
            {
                ans = "NO";
                break;
            }
            
            
        }
        cout<<ans<<endl;
        
        
        

}
int main()
{
    ios
    tc
    SohamX();
    return 0;
}