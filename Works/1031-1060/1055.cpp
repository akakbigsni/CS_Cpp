#include <iostream>
#include <cmath>
int main()
{
    int a, b=11;
    double c = 1, d;
    std::cin >> a;
    for (int i = 0; b > 10; i++)
    {
        d = d + pow(a, i) / c;
        c = c * (i + 1);
        b = (pow(a, i) / c )* 1e9;
    }
    b = d * 1e6;
    if((b % 10) >= 5)
    {
        b = b + 10;
    }
    b=b/10;
    d = b / 1e5;
    std::cout << d;
}