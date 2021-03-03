#include <iostream>
struct Sales_data
{
    std::string ISBN = "";
    unsigned units_num = 0;
    double revenue = 0.0;
} accum, trans, *salesptr;
