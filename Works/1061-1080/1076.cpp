#include <iostream>
int main()
{
    int a[7]={}, b=0;
    for (int i = 0; i + 1 <= 7; i++)
        std::cin >> a[i];
    for (int i = 0; i + 1 <= 6; i++)
        for (int j = i + 1; j + 1 <= 7; j++)
            if (a[i] == a[j])
            {
                b = 1;
                break;
            }
    if (b == 1)
        std::cout << "YES";
    else
        std::cout << "NO";
}