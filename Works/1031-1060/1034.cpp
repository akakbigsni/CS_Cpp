#include <cmath>
#include <iostream>
using std::cout;
int main()
{
    int a, b;
    std::cin >> a;
    if (a % 3 == 0)
        b = b + 2;
    if (a % 5 == 0)
        b = b + 1;
    switch (b)
    {
    case 0:
        cout << "B";
        break;
    case 1:
        cout << "D";
        break;
    case 2:
        cout << "C";
        break;
    case 3:
        cout << "A";
        break;
    }
}