#include<cmath>
#include<iostream>
int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    a = (b-a)*(c-1)+a;
    std::cout << a ;
}