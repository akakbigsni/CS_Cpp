#include<cmath>
#include<iostream>
int main()
{
    int a;
    std::cin >>a;
    a = a-(a/100)*99+(a%10)*99;
    std::cout << a ;
}