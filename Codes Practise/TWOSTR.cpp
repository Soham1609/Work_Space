    #include <iostream>
    using namespace std;
    #include <math.h>
    #include <stdio.h>
    #include <bits/stdc++.h>


    int main()
    {
    
        
        int t;
        cin >> t;

        while (t--)
        {
            string a,b;
            bool flag =0;
            cin>>a>>b;
            for (int i = 0; i < a.length(); i++)
            {
                if ((a[i]== '?' || b[i] == '?' ) || (a[i]==b[i]))
                {
                    flag = 0;
                }
                else
                {
                    flag =1;
                    break;
                }
                
                
            }
            if (flag==1)
            {
                cout<<"No"<<endl;
            }
            if (flag==0)
            {
                cout<<"Yes"<<endl;
            }
            
            
        }
        return 0;
    }