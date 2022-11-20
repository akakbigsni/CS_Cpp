#include <iostream>
int main()
{
    int a[7], b[8], c[8];
    b[7] = c[7] = 0;
    for (int i = 0; i + 1 <= 7; i++)
    {
        std::cin >> a[i];
        if (a[i] != 0)
            b[b[7]] = a[i], b[7]++;
        else
            c[c[7]] = a[i], c[7]++;
    }
    for (int i = 0; i + 1 <= b[7]; i++)
        std::cout << b[i] << " ";
    for (int i = 0; i + 1 <= 7 - b[7]; i++)
        std::cout << 0 << " ";
}