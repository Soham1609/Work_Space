#include <iostream>
using namespace std;
long long int calcgcd(int a,int b){
    long long int n=abs(a-b);
    long long int x=1;
    long long int count=1;
    if(n==1){
        return count;
    }
    else{
        while(x*x<=n){
        if(n%x!=0){
            x++;
        }
        else{
            count++;
            x++;
        }
      //  x++;
    }
    return count;
        
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        cout<<calcgcd(a,b)<<endl;
        
    }
	// your code goes here
	return 0;
}
    // vector<int> factors(int num)
    // {

    //     vector<int> answer1;
    //     int i = 1;
    //     int count = 0;
    //     while (i * i <= num)
    //     {

    //         if (num % i == 0)
    //         {
    //             count++;

    //             if (num / i != i)
    //             {
    //                 count++;
    //             }
    //         }
    //         i++;
    //     }

    //     cout << count << endl;

    //     return answer1;
    // }