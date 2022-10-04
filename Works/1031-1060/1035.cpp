#include<cmath>
#include<iostream>
using std::cout;
int main()
{
    int a;
    std::cin >> a;
    if(a<=3)
        cout <<11;
    else 
        cout << (a-3)*2.4+11;
}