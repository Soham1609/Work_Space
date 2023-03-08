
#include <cmath>
#include <math.h>
#include <iostream>

using namespace std;
double area(int x1, int y1, int r1, int x2, int y2, int r2)
{
    double d = sqrt(pow((abs(x2 - x1)), 2) + pow((abs(y2 - y1)), 2));
    double d1 = (r1 * r1) - (r2 * r2) + (d * d);
    double d2 = d - d1;
    double cosinverse_r1 = acos(d1 / r1);
    double cosinverse_r2 = acos(d2 / r2);
    double area1 = (r1 * r1) * (cosinverse_r1)-d1 * (sqrt(abs((r1 * r1) - (d1 * d1))));
    double area2 = (r2 * r2) * (cosinverse_r2)-d2 * (sqrt(abs((r2 * r2) - (d2 * d2))));
    double final_area = area1 + area2;
    return final_area;
}
int main()
{
    int a, b, c, d, r1, r2;
    // cin>>a>>b>>r1>>c>>d>>r2;
    // cout<<area(a,b,r1,c,d,r2);
    cout << area(0, 0, 2, 3, 0, 2);
    return 0;
}
