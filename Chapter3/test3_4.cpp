#include <iostream>

int main()
{
    //读取一行
    std::string str1, str2;
    std::cin >> str1 >> str2;
    if (str1 == str2)
        std::cout << "两字符串相等" << std::endl;
    else if (str1 > str2)
        std::cout << str1 << std::endl;
    else
        std::cout << str2 << std::endl;
    int size1 = str1.size();
    int size2 = str2.size();
    if (size1 == size2)
        std::cout << "两字符串长度相等" << std::endl;
    else if (size1 > size2)
        std::cout << str1 << std::endl;
    else
        std::cout << str2 << std::endl;
    return 0;
}