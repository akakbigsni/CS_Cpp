#include<cmath>
#include<iostream>
int main()
{
    int a, b;
    double c;
    std::cin >> a >> b;
    a = b * 1e6 / a;
    if((a % 10) >= 5)
    {
        a = a + 10;
    }
    a = a / 10;
    c = a / 1e3;
    std::cout << c << "%";
}