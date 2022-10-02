#include <iostream>
int main()
{
    int i, j;
    char a[100];
    std::cin.getline(a,100);
    for (i = 0; i <=100; i++)
    {
        if (a[i] == "\r")
            break;
        if (a[i] >= '0' && a[i] <= '9')
        {
            j++;
        }
    }
    std::cout << j;
}