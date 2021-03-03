#include <iostream>

int main()
{
    std::string str;
    std::cin >> str;
    for (char ch : str)
        if (!ispunct(ch))
            std::cout << ch;
    std::cout << std::endl;
    return 0;
}