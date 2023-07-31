#include <iostream>
using namespace std;

class Demo
{
public:
    int A;

private:
    int B;

protected:
    int C;

public:
    Demo(int i, int j, int k)
    {
        A = i;
        B = j;
        C = k;
    }
    friend void fun();
};

void fun()
{
    Demo obj(4, 5, 6);
    cout << "Values of A,B,C are " << obj.A << "\n";
    cout << "Values of A,B,C are " << obj.B << "\n";
    cout << "Values of A,B,C are " << obj.C << "\n";
}

int main()
{
    fun();

    return 0;
}