#include "string.h"

int main()
{
    std::cout << "Test from task:" << std::endl;
    String const hello("hello");
    std::cout << hello[0][4];
    std::cout << hello[1][4];


    std::cout << "Start string:" << std::endl;
    String const test_string("0123456");
    std::cout << "0 0" << std::endl;
    std::cout << test_string[0][0];
    std::cout << "0 2" << std::endl;
    std::cout << test_string[0][2];
    std::cout << "3 3" << std::endl;
    std::cout << test_string[3][3];
    std::cout << "2 5" << std::endl;
    std::cout << test_string[2][5];
    std::cout << "3 6" << std::endl;
    std::cout << test_string[3][6];
    std::cout << "6 6" << std::endl;
    std::cout << test_string[6][6];

    return 0;
}