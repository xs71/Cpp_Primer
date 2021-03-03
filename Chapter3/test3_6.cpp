#include <iostream>

int main()
{
    std::string str = "String";
    for (char &ch : str)
        ch = 'X';
    std::cout << str << std::endl;
    return 0;
}