#include <iostream>
using namespace std;

class Demo
{
public:
    int A;
    int B;

    Demo(int i, int j)
    {
        A = i;
        B = j;
    }
    friend Demo operator+(Demo op1, Demo op2);
};

Demo operator+(Demo op1, Demo op2)
{
    return Demo(op1.A + op2.A, op1.B + op2.B);
}

int main()
{
    Demo obj1(5, 4);
    Demo obj2(2, 8);
    Demo obj(0, 0);

    obj = obj1 + obj2;

    cout << obj.A << "\n";
    cout << obj.B << "\n";

    return 0;
}