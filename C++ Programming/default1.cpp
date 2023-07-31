#include <iostream>
using namespace std;

float CircleArea(float Radius, float PI = 3.14f)
{
    float Area = 0.0f;

    Area = Radius * Radius * PI;

    return Area;
}
int main()
{
    float fRet = 0.0f;
    float R = 0.0f;

    cout << "Enter radius : ";
    cin >> R;

    fRet = CircleArea(R);

    cout << fRet << "\n";

    fRet = CircleArea(R, 7.28f);

    cout << fRet;

    return 0;
}
