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
    Demo()
    {
        A = 0;
        B = 0;
    }
    Demo operator+(Demo op)
    {
        Demo temp;
        temp.A = A + op.A;
        temp.B = B + op.B;
        return temp;
    }
};

int main()
{
    Demo obj1(4, 5);
    Demo obj2(2, 3);
    Demo obj(0, 0);

    obj = obj1 + obj2;

    cout << obj.A << "\n";
    cout << obj.B << "\n";

    return 0;
}