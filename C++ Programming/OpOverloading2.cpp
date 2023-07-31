#include <iostream>
using namespace std;

class Demo
{
public:
    int A, B;

    Demo(int i, int j)
    {
        A = i;
        B = j;
    }
    friend Demo operator+(Demo op1, Demo op2);
    friend Demo operator-(Demo op1, Demo op2);
    friend Demo operator/(Demo op1, Demo op2);
    friend Demo operator*(Demo op1, Demo op2);
};

Demo operator+(Demo op1, Demo op2)
{
    cout << "Inside + operator"
         << "\n";
    return Demo(op1.A + op2.A, op1.B + op2.B);
}

Demo operator-(Demo op1, Demo op2)
{
    cout << "Inside - operator"
         << "\n";
    return Demo(op1.A - op2.A, op1.B - op2.B);
}

Demo operator/(Demo op1, Demo op2)
{
    cout << "Inside / operator"
         << "\n";
    return Demo(op1.A / op2.A, op1.B / op2.B);
}

Demo operator*(Demo op1, Demo op2)
{
    cout << "Inside * operator"
         << "\n";
    return Demo(op1.A * op2.A, op1.B * op2.B);
}

int main()
{
    Demo obj1(9, 6);
    Demo obj2(3, 3);
    Demo obj(0, 0);

    obj = obj1 + obj2;

    cout << obj.A << "\n";
    cout << obj.B << "\n";

    obj = obj1 - obj2;

    cout << obj.A << "\n";
    cout << obj.B << "\n";

    obj = obj1 / obj2;

    cout << obj.A << "\n";
    cout << obj.B << "\n";

    obj = obj1 * obj2;

    cout << obj.A << "\n";
    cout << obj.B << "\n";

    return 0;
}