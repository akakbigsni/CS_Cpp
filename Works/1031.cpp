#include<cmath>
#include<iostream>
int main()
{
    int a;
    std::cin >> a;
    if(a % 2 != 0)
        std::cout << "odd";
    else 
        std::cout << "even";
}