#include <iostream>
int main()
{
    int a[10][10] = {}, n, x = 0, y;
    std::cin >> n;
    ;
    for (; x < n; x++)
    {
        y = 0;
        for (; y < n; y++)
            std::cin >> a[x][y];
    }
    y = 0;
    for (; x >= 0; x--)
    {
        y += a[x][x] + a[x][n - x - 1];
    }
    if (n % 2 == 1)
        n = n / 2, y -= a[n][n];
    std::cout << y;
}