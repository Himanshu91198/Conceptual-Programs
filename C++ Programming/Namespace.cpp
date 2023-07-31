#include <iostream>
using namespace std;

namespace Marvellous
{
    class Demo
    {
    public:
        int A;
        int B;

        Demo(int i = 10, int j = 10)
        {
            A = i;
            B = j;
        }
    };
}
namespace Infosystems
{
    class Demo
    {
    public:
        int A;
    };
}

using namespace Marvellous;
using namespace Infosystems;

int main()
{
    Marvellous ::Demo obj1;
    Infosystems ::Demo obj2;

    // Infosystems ::Demo obj2;

    cout << "Inside main"
         << "\n";

    return 0;
}