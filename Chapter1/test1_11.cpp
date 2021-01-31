#include <iostream>

int main()
{
    int start = 0;
    int end = 0;
    std::cout << "input two nums split with a space:";
    std::cin >> start >> end;
    for (int i = start; i < end; i++)
        std::cout << i << std::endl;
    return 0;
}