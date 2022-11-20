#include <iostream>
int main()
{
    int a[3][3], x, y;
    for (x = 2; x >= 0; x--)
    {
        y = 0;
        for (; y < 3; y++)
            std::cin >> a[y][x];
    }
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
            std::cout << a[x][y] << " ";
        std::cout << "\n";
    }
}