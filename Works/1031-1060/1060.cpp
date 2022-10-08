#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
int main()
{
    int day, coin;
    cin >> day;
    for (int i = 1; day >= i / 2; i++)
    {
        coin = coin + i * i;
        day = day - i;
        if (day < i + 1)
        {
            coin = coin + day * (i + 1);
            break;
        }
    }
    cout << coin;
}