#include <iostream>
#include "sum.h"

using namespace std;

int main()
{
    int a = 2;
    int b = 4;

    int result = Sum(a, b);
    std::cout << "sum is: " << result << std::endl;
    
    return 0;
}