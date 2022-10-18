#include <iostream>
int main()
{
    int n;
    std::cin >>n;
    int a[n+1];
    a[1]=a[2]=1,a[3]=2;
    for(int i=4;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
    std::cout <<a[n];
}