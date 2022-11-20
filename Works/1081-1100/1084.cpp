#include <iostream>
int main()
{
    int a[7] = {}, up, down;
    std::cin >> a[0];
    for (int i = 1; i < 7; i++)
    {
        std::cin >> a[i];
        if (a[i] - a[i - 1] > 0)
            up++;
        else if (a[i] - a[i - 1] == 0)
            up++, down++;
        else
            down++;
    }
    if (up + down == 12)
        std::cout << "EQUAL";
    else if (up == 6)
        std::cout << "UP";
    else if (down == 6)
        std::cout << "DOWN";
    else
        std::cout << "OTHER";
}