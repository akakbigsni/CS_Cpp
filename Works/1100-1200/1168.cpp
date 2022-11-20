#include <iostream>
#include <algorithm>
int main()
{
    int n;
    std::cin >> n;
    int a[n] = {}, *p = a;
    for (int i; i + 1 <= n; i++)
        std::cin >> a[i];
    std::cout << *std::min_element(a, a + n);
}
