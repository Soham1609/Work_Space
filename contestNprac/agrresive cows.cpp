
#include <bits/stdc++.h>
using namespace std;
int ispossible(vector<int> &stalls, int k , int mid ){

}
int agrresive_cows(vector<int> &stalls, int k){
    int s = 0;
    int maxi = -1;

    for (int  i = 0; i < stalls.size(); i++)
    {
        maxi = max(maxi , stalls[i]);
    }
    int e  = maxi ;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while (s<=e)
    {
        if(ispossible(stalls , k , mid)){

        }
    }
    
    

}