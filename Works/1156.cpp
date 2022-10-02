#include <cmath>
#include <iostream>
int main()
{
    int a;
    double b = 0;
    std::cin >> a;
    a = a * 12;

    if (a > 60000)
    {
        a = a - 60000;
        b = a * 0.03;
        if (a > 36000)
        {
            b = b + (a - 36000) * 0.07;
            if (a > 144000)
            {
                b = b + (a - 144000) * 0.1;
                if (a > 300000)
                {
                    b = b + (a - 300000) * 0.05;
                    if (a > 420000)
                    {
                        b = b + (a - 420000) * 0.05;
                        if (a > 660000)
                        {
                            b = b + (a - 660000) * 0.05;
                            if (a > 960000)
                            {
                                b = b + (a - 960000) * 0.1;
                            }
                        }
                    }
                }
            }
        }
    }
    std::cout << b;
}