#include <iostream>
int main()
{
    int a[3][4], x = 0, y;
    for (; x < 3; x++)
    {
        y = 1;
        for (; y < 4; y++)
            std::cin >> a[x][y];
        std::cin >> a[x][0];
    }
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 4; y++)
            std::cout << a[x][y] << " ";
        std::cout << " \n";
    }
}