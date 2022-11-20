#include <iostream>
using std::cout;
int main()
{
    int n;
    std::cin >> n;
    if (n % 2 == 0 && (n > 4 && n <= 12))
        cout << 1;
    else
        cout << 0;
    cout << " ";
    if (n % 2 == 0 || (n > 4 && n <= 12))
        cout << 1;
    else
        cout << 0;
    cout << " ";
    if (!((n % 2 == 0) == (n > 4 && n <= 12)))
        cout << 1;
    else
        cout << 0;
    cout << " ";
    if (!(n % 2 == 0) && (!(n > 4 && n <= 12)))
        cout << 1;
    else
        cout << 0;
}