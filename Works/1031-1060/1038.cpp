#include <cmath>
#include <iostream>
int main()
{
    double x1, y1, x2, y2, x3, y3, a, b, c;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    x1 = std::max(a, std::max(b, c)) * 2;
    if (x1 == a + b + c)
        std::cout << "BAD";
    else
        std::cout << "OK";
}