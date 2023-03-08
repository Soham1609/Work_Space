#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int hardness, tensile_strength;
        float carbon_content;
        cin >> hardness >> carbon_content >> tensile_strength;

        if (hardness > 50 and carbon_content < 0.7 and tensile_strength > 5600)
        {
            cout << 10;
        }
        else if (hardness > 50 and carbon_content < 0.7 and tensile_strength < 5600)
        {
            cout << 9;
        }
        else if (hardness < 50 and carbon_content < 0.7 and tensile_strength > 5600)
        {
            cout << 8;
        }
        else if (hardness > 50 and carbon_content > 0.7 and tensile_strength > 5600)
        {
            cout << 7;
        }
        else if (hardness > 50 or carbon_content < 0.7 or tensile_strength > 5600)
        {
            cout << 6;
        }
        else
        {
            cout << 5;
        }
    }
    return 0;
}