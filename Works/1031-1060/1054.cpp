#include <iostream>
#include <cmath>
int main()
{
    int a,b;
    std::cin >> a;
    for (int n = 2; a >= (n * n + n) / 2; n++)
    {
        b = (a - (n * n + n) / 2) / n;
        if ((n%2==0)&&(a % n == n / 2))
        {
            for (int i = 1; i <= n; i++)
            {
                std::cout << b + i << " ";
            }
            std::cout << "\n";
        }
        if ((n%2!=0)&&(a % n == 0))
        {
            for (int i = 1; i <= n; i++)
            {
                std::cout << b + i << " ";
            }
            std::cout << "\n";
        }
    }
}
