#include <iostream>
#include <cmath>
int main()
{
    int a =0;
    double b=1,c=1,d=1;
    for (double i = 1; i <= 1e2; i++)
    {
        c=c*i;
        d=d*(i*2+1);
        b = b + c/d;
    }
    a = b *2* 1e6;
    if (a % 10 >= 5)
    {
        a = a + 10;
    }
    a = a / 10;
    b = a / 1e5;
    std::cout << b;
}