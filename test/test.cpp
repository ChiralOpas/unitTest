#include <iostream>
#include "../src/sum.h"

using namespace std;

int main()
{
    std::cout << "testing Sum function" << std::endl;

    int result = Sum(2, 4);
    if (result == 6)
        std::cout << "testing passed" << std::endl;
    else
        std::cout << "testing failed" << std::endl;

    return 0;
}