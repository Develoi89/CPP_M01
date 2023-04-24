#include <iostream>
#include <fstream>
#include <string>

int main(void)
{
    std::string file;
    std::string s1;
    std::string s2;
    std::string str;
    int         i;
    int         aux;

    std::cout << "Type the name of file to modificate:" << std::endl;
    std::getline (std::cin, file);
    std::ifstream tmp(file);
    std::ofstream rtn("testfile.replace");
    std::cout << "Type the characters that will be replaced:" << std::endl;
    std::getline (std::cin, s1);
    std::cout << "Type the new characters that will be replace the old:" << std::endl;
    std::getline (std::cin, s2);
    while (tmp)
    {
        std::getline (tmp, str);
        i = str.find(s1);
        if(i > 0)
        {
            for(aux = 0; aux < i; aux++)
                rtn << str[aux];
            rtn << s2;
            rtn << str[i + s1.size()] << std::endl;
        }
        else
            rtn << str << std::endl;
    }
}