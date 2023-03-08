#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stack>


int alice(stack <int> &stack1, int n){
    int  val=0, val1 =0, val2 =0;
        for (int i = 0; i < n; i++)
        {
            val1 =stack1.pop();
            val2 = stack1.pop();
            val = val1 |val2;
        }
        return val;
        
}
int alice(stack <int> &stack1 , int n){
    int  val=0, val1 =0, val2 =0;
        for (int i = 0; i < n; i++)
        {
            val1 =stack1.pop();
            val2 = stack1.pop();
            val = val1 &val2;
        }
        return val;
        
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        stack<int> stack1;
        for (int i = 0; i < n; i++)
        {
            int a ;
            cin>>a;
            stack1.push(a);
        }
        int loop = n;
        int temp = 0;
        while (loop==1)
        {
            if (temp %2 ==0)
            {
            stack1.push(alice(stack1),n);
            }
            else
            {
            stack1.push(bob(stack1),n);
            }
            temp++;
            loop--;
        }
        int ans = stack1.top();
        
        
    }
    return 0;
}