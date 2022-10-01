#include <iostream>
using std::cin;
using std::cout;
int main()
{
    int m, n;
    cin >> m >> n;
    switch (n)
    {
    case 2:
        if (m % 4 != 0)
            cout << 28;
        else if (m % 100 != 0)
            cout << 29;
        else if (m % 400 != 0)
            cout << 28;
        else
            cout << 29;
        break;
    default:
        if (n < 8 && n % 2 == 0 || n > 8 && n % 2 != 0)
            cout << 30;
        else
            cout << 31;
    }
}