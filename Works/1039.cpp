#include <cmath>
#include <iostream>
int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a == b)
        std::cout << "C";
    else if (a == c)
        std::cout << "B";
    else
        std::cout << "A";
}