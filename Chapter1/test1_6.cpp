// 不合法，';'代表句子结束v1，v1后不应有分号
std::cout << "The sum of " << v1;
     << " and " << v2;
    << " is " << v1 * v2 << std::endl;

// 正确
std::cout << "The sum of " << v1
     << " and " << v2
    << " is " << v1 * v2 << std::endl;

