#include <iostream>
int main()
{
    int a[7] = {}, up, down;
    std::cin >> a[0];
    for (int i = 1; i < 7; i++)
    {
        std::cin >> a[i];
    }
    if (a[1] == 2)
        std::cout << "UP";
    else if (a[0] == 1)
        std::cout << "EQUAL";
    else
        std::cout << "DOWN";
}