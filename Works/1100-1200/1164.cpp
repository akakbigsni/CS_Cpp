#include <iostream>
#include <cmath>
using std::cout;
int main()
{
    float a, b, c, d, x1 = 0.0, x2 = 0.0;
    std::cin >> a >> b >> c;
    d = b * b - a * c * 4;
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (a * 2.);
        x2 = (-b - sqrt(d)) / (a * 2);
        cout << "x1=" << x1 << ";x2=" << x2;
    }
    if (d == 0)
    {
        x1 = (-b) / (a * 2);
        cout << "x1=x2=" << x1;
    }
    if (d < 0)
    {
        x1 = (-b) / (a * 2);
        x2 = sqrt(-d) / (a * 2);
        cout << "x1=" << x1 << "+" << x2 << "i;"
             << "x1=" << x1 << "-" << x2 << "i";
    }
}