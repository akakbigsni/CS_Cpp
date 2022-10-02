#include <iostream>
int main()
{
    int a, b = 0;
    for (a = 1; a < 100; a = a + 2)
    {
        b = b + a * (a + 1) * (a + 2);
    }
    std::cout << b;
}