#include <iostream>
#include <cmath>
int ca(int n)
{
    int a;
    if (n != 0)
        a = log10(n) + 1;
    else
        a = 1;
    return a;
}
int cb(int n)
{
    int b = 0;
    for (; n != 0;)
    {
        if (n % 2 == 1)
            b++;
        n = n / 10;
    }
    return b;
}
int main()
{
    int n, a, b;
    std::cin >> n;
    a = ca(n);
    b = cb(n);
    for (; a != 3 && b != 2;)
    {
        std::cout << a << b << a - b << "\n";
        n = ca(a) + ca(b) + ca(a - b);
        b = cb(a) + cb(b) + ca(a - b);
        a=n;
    }
    std::cout << a << b << a - b << "\n";
}