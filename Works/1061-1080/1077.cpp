#include <iostream>
#include <cmath>
using std::cout;
int main()
{
    int M, N;
    std::cin >> M >> N;
    int m = M, n, b = log(M) / log(N);
    int a[b] = {};
    for (int i = 0; i <= b; i++)
    {
        a[i] = m % N;
        m /= N;
    }
    for (int i = 0; b - i >= 0; i++)
        switch (a[b - i])
        {
        case 10:
            cout << "A";
            break;
        case 11:
            cout << "B";
            break;
        case 12:
            cout << "C";
            break;
        case 13:
            cout << "D";
            break;
        case 14:
            cout << "E";
            break;
        case 15:
            cout << "F";
            break;
        default:
            cout << a[b - i];
            break;
        }
}