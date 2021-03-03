#include <iostream>

int main()
{
    //读取一行
    std::string line;
    getline(std::cin, line);
    std::cout << line << std::endl;
    //按单词读取
    std::string word;
    while (std::cin >> word)
        std::cout << word << std::endl;
    return 0;
}