#include <iostream>
#include <string>
using std::string;
string adjoin(string str1)
{
    str1.replace(str1.find(" "),1,"");
    return str1;
}
int main()
{
    string str1;
    getline(std::cin,str1);
    std::cout <<adjoin(str1);
}