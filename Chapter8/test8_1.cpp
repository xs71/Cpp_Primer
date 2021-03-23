#include <iostream>
using namespace std;

istream &read(istream &in)
{
    auto state = in.rdstate();
    char s;
    while (in >> s)
    {
        cout << s;
    }
    in.setstate(state);
    return in;
}

int main()
{
    read(cin);
    return 0;
}