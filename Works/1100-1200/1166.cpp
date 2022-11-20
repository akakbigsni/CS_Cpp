#include <iostream>
#include <algorithm>
int main()
{
    int a[3];
    std::cin >> a[0] >> a[1] >> a[2];
    std::cout << *std::min_element(a, a + 3) << " ";
    *std::min_element(a, a + 3) = *std::max_element(a, a + 3);
    std::cout << *std::min_element(a, a + 3) << " ";
    *std::min_element(a, a + 3) = *std::max_element(a, a + 3);
    std::cout << *std::min_element(a, a + 3);
}