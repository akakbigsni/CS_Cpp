#include <iostream>
#include <cmath>
int main()
{
    int a = 11;
    double b = 0;
    for (int i = 1; i <= 1e5; i++)
    {
        b = b + 1.0/(i*4-3)-1.0/(i*4-1);
    }
    a = b *4* 1e6;
    if (a % 10 >= 5)
    {
        a = a + 10;
    }
    a = a / 10;
    b = a / 1e5;
    std::cout << b;
}