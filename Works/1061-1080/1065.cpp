#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    n = n * 3e3;
    if (n >= 1073741823)
        std::cout << "YES";
    else
        std::cout << "NO";
}