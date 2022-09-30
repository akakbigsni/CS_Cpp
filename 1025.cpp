#include<cmath>
#include<iostream>
int main()
{
    double a, b, c;
    std::cin >>a >>b >>c;
    c = (a + b +c)/2;
    std::cout << sqrt(c*(c-a)*(c-b)*(a+b-c));
}