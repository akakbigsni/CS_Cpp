#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
double squaresum(double a, double b)
{
    double result;
    result = a * a + b * b;
    return result;
}
int main()
{
    double a, b, c;
    cin >> a >> b;
    c = squaresum(a, b);
    cout << c;
}