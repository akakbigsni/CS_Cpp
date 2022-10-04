#include <iostream>
#include <cmath>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        int j = pow(10, i);
        for (int n = j/10; n <= j; n++)
        {
            if (n * n % j == n)
            {
                std::cout << n << "\n";
            }
        }
    }
}