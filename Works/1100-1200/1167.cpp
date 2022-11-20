#include <iostream>
int main()
{
    int x, n, b = 0, s = 0;
    std::cin >> x >> n;
    if (n + x >= 8)
    {
        b = 2;
        s = n;
        n = n - 8 + x;
        if (x == 7)
            b--;
        int i = n / 7;
        b += i * 2;
        if (n % 7 == 6)
            b++;
        s = (s - b) * 250;
    }
    else
    {
        if (x + n - 1 <= 5)
            s = n * 250;
        else
            s = (6 - x) * 250;
    }
    std::cout <<s;
}