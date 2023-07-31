#include <iostream>
using namespace std;

class Base
{
public:
    int A, B;

private:
    virtual void gun()
    {
        cout << "Gun in Base"
             << "\n";
    }
};

class Derieved : public Base
{
public:
    int X, Y;

    void gun()
    {
        cout << "Gun in Derieved"
             << "\n";
    }
};

int main()
{
    Base *bp = new Derieved;

    bp->gun();

    return 0;
}