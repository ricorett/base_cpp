#include <iostream>
#include <fstream>

int main()
{
    std::string s;
    std::ifstream fin("in.txt");

    if (!fin.is_open())
    {
        std::cout << "Не получилось открыть файл in.txt" << std::endl;
        return 1;
    }
    while(!fin.eof())
    {
        fin >> s;
        std::cout << s << std::endl;
    }

    fin.close();
}
