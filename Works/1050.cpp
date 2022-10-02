#include <iostream>
int main()
{
    int a = 0;
    for (int i = 3; i < 100; i++)
    {
        for (int j = i + 1; j < 100; j++)
        {
            for (int k = j + 1; k <= 100; k++)
            {
                if (i*i+j*j==k*k)
                {
                    a++;
                }
            }
        }
    }
    std::cout << a;
}