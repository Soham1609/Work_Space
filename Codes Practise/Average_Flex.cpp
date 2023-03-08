#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
using namespace std;
#define tt 			long long int T;cin>>T;while(T--)       
#define ll			long long
#define pb 			push_back
#define io 			cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
const int MOD = 998244353;

void func()
{
    int n,count=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int great=0,less=0;
        for (int j = 0; j < n; j++)
        {
            if(i==j)
            {
                continue;
            }
            if(arr[i]>=arr[j])
            {
                less++;
            }
            else
            {
                great++;
            }
        }
        if(less>=great)
        {
            count++;
        }
    }
    cout<<count<<endl;
    
    
}
int main()
{
    io;tt
    func();
    return 0;
}