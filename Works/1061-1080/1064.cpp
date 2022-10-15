#include <iostream>
#include <cmath>
double mysqrt(double a)
{

    int b;
    if (a < 1)
        a = 1 / a, b = -1;
    double x = a / 2, m = 0, n = a;
    x = sqrt(a);
        /*
        for (; n - m > 1 / 1e15; x = m / 2 + n / 2)
        {
            if (x * x < a)
                m = x;
            else if (x * x > a)
                n = x;
            else
                break;
            if(m>n)
                m+=n,n=m-n,m=m-n;

        }
        if (b == -1)
            x = 1 / x;
        if (a == 1)
            x = 1;
            */
        return x;
}
int main()
{
    double a;
    std::cin >> a;
    std::cout << mysqrt(a);
}