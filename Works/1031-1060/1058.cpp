#include <iostream>
#include <cmath>
int main()
{
    int a, b = 0, c = 0;
    std::cin >> a;
    c=a;
    int prime[a];
    prime[0] = 2;

    for (int i = 3; i < a; i++)
    {
        for (int n = 0; i % prime[n] != 0; n++)
        {
            if (n == b)
            {
                b++;
                prime[b] = i;
            }
        }
    }
    std::cout << a << "=";
    for (int i = 0; i <= b; i++)
    {
        for (; a % prime[i] == 0;)
        {
            a = a / prime[i];
            std::cout << prime[i];
            if (a == 1)
            {
                break;
            }
            std::cout << "*";
        }
    }
    if(c==a)
    {
        std::cout <<a;
    }
}