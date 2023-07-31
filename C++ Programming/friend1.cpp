#include<iostream>
using namespace std;

class Marvellous
{
    public:
    int A;
    private:
    int B;
    protected:
    int C;

    public:
    Marvellous(int i, int j, int k)
    {
        A = i,
        B = j;
        C = k;
    }
};

class Demo
{
    int Addition(int A, int B, int C)
    {
        return A + B + C;
    }
};

int main()
{
    
}