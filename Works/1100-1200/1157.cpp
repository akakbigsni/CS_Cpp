#include <iostream>
#include <string>
int main()
{
    std::string a, b;
    std::getline(std::cin, a);
    for (std::string::iterator it = a.end() - 1; it >= a.begin(); it--)
        b += *it;
    std::cout << b;
}