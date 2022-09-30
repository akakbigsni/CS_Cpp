#include<cmath>
#include<iostream>
int main()
{
    int a, b, c;
    std::cin >>a >>b >>c;
    a = a - c / b;
    if(c % b != 0)
    {
        a--;
    }
    std::cout << a ;
}