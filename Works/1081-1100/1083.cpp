#include <iostream>
int main()
{
    int a[11][11]={}, x = 1, y, n;
    std::cin >> n;
    for (; x <= n; x++)
    {
        for (y = 1; y <= n; y++)
        {
            std::cin >> a[0][0];
            if (a[0][0] == 1)
            {
                a[x][y] -= 10;
                for (int i = -1; i <= 1; i++)
                    for (int j = -1; j <= 1; j++)
                        a[x + i][y + j]++;
            }
        }
    }
    for (x = 1; x <= n; x++)
    {
        for (y = 1; y <= n; y++)
        {
            if (a[x][y] < 0)
                std::cout << "* ";
            else
                std::cout << a[x][y] << " ";
        }
        std::cout <<"\n";
    }
}