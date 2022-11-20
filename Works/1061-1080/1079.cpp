#include <iostream>
int main()
{
    int a[3][4], x, y;
    double b[4]={}, c[3]={};
    for (; x < 3; x++)
    {
        y = 0;
        for (; y < 4; y++)
            std::cin >> a[x][y], b[y] += a[x][y], c[x] += a[x][y];
    }
    std::cout << c[0] / 4 << " " << c[1] / 4 << " " << c[2] / 4 << "\n"
              << b[0] / 3 << " " << b[1] / 3 << " " << b[2] / 3 << " " << b[3] / 3;
}