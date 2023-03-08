
#include <iostream>
#include <vector>

using namespace std;

int transform(vector<int> &a, vector<int> &b)
{
    int n = a.size();
    int ops = 0;
    bool flag = 0;
    if (a[0] > 0)
    {
        ops++;
    }
    for (int i = 1; i < n; i++)
    {
        int diff = a[i] - a[i - 1];
        if (diff > 1)
        {
            // ops++;
            return -1;
        }
        if (diff == 1)
        {
            ops++;
        }
        if (diff == 0 && a[i] == 1)
        {
            ops++;
        }
    }
    return ops;
}

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int ops = transform(A, B);
    cout << ops << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int transform(vector<int>& A, vector<int>& B) {
//     int n = A.size();
//     int ops = 0;
//     for (int i = 0; i < n; i++) {
//         int diff = A[i] - B[i];
//         if (diff < 0) {
//             return -1;
//         }
//         if (diff > 0) {
//             ops += diff;
//             if (i > 0) {
//                 B[i] += diff;
//             }
//         }
//     }
//     return ops;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n), b(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin >> b[i];
//     }
//     int moves = 0;
//     vector<int> temp(n);
//     // temp = a;
//     // sort(temp.begin(), temp.end());
//     bool  flag =0;

//     for (int i = 0; i < n; i++)  {
//         if (a[i]>=0  && flag == 0 ) {

//     }
//     if (temp != a)
//     {
//         return -1;
//     }
//     else
//     {
//         return temp[n - 1];
//     }
//     // for (int i = 1; i < n; i++) {
//     //     if (a[i] > b[i]) {
//     //         if (a[i-1] >= b[i]) {
//     //             int diff = a[i] - b[i];
//     //             moves += diff;
//     //             b[i] += diff;
//     //         } else {
//     //             cout << "-1\n";
//     //             return 0;
//     //         }
//     //     } else if (a[i] < b[i]) {
//     //         if (a[i-1] <= b[i]) {
//     //             int diff = b[i] - a[i];
//     //             moves += diff;
//     //             b[i] -= diff;
//     //         } else {
//     //             cout << "-1\n";
//     //             return 0;
//     //         }
//     //     }
//     // }
//     cout << moves << "\n";
//     return 0;
// }
// int diff = A[i] - B[i];
// cout<<diff<<endl;
// if (diff < 0)
// {
//     return -1;
// }
// if (diff > 0)
// {
//     ops += diff;
//     if (i >0)
//     {
//         B[i] += diff;
//     }
// }