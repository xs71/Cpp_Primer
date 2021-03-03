#include <iostream>

int main()
{
    std::string line;
    //按单词读取
    std::string word;
    while (std::cin >> word)
        line += word;
    std::cout << line << std::endl;

    return 0;
}