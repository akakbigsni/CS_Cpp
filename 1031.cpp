#include<cmath>
#include<iostream>
int main()
{
    double a, b;
    std::cin >> a >> b;
    for(; a > b; a = a - b){}
    std::cout << a ;
}