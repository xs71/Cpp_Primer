#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector<string> read(string filename)
{
    ifstream infile(filename);
    string word;
    vector<string> res;
    while (getline(infile, word))
        res.push_back(word);
    infile.close();
    return res;
}

int main()
{
    vector<string> res = read("test8_1.cpp");
    for (auto line : res)
        cout << line << endl;
    return 0;
}