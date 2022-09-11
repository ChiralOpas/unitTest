#include "test.h"

/**
 * @brief 
 * the main entry point to setup and run different tests
 * @param argc argument count
 * @param argv argument provided at the time of test run/creation in cmakelists
 * @return int as 0 if test passes else 1 if test fails
 */
int main(int argc, char **argv)
{
    switch (atoi(argv[1]))
    {
    case 1:
        test_sum_valid_input_passes();
        break;
    case 2:
        test_sum_invalid_input_fails();
        break;
    default:
        break;
    }
}


int test_sum_valid_input_passes()
{
    return (Sum(2, 4) == 6) ? 0 : 1;
}

int test_sum_invalid_input_fails()
{    
    return (Sum(2, 4) == 8) ? 1 : 0;
}