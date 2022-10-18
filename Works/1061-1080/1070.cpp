#include <iostream>
int main()
{
    double Pi = 1, n = 1;
    for (int i = 1; n >= 0.0000001; i++)
    {
        n = n * i / (i * 2 + 1);
        Pi = Pi + n;
    }
    std::cout << Pi*2;
}