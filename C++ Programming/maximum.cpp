#include <iostream>
using namespace std;

class Demo
{
public:
    int A, B;

public:
    Demo(int No1, int No2)
    {
        A = No1;
        B = No2;
    };

    void max()
    {
        if (A > B)
        {
            cout << "A is maximum\n";
        }
        else
        {
            cout << "B is maximum\n";
        }
    };
};

int main()
{
    Demo obj(10, 7);

    obj.max();

    return 0;
}
