#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    int a[n + 1];
    a[1] = 1, a[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    std::cout << a[n];
}