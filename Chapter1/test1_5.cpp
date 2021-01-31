#include <iostream>

int main(int argc, char const *argv[])
{
    int a = 0, b = 0;
    std::cin >> a;
    std::cin >> b;
    std::cout << "The result of ";
    std::cout << a;
    std::cout << " * ";
    std::cout << b;
    std::cout << " is ";
    std::cout << a * b;
    std::cout << std::endl;
    return 0;
}
