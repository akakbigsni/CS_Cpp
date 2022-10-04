#include <iostream>
int main()
{
    int a = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (i <= j && j <= k)
                {
                    a++;
                }
            }
        }
    }
    std::cout << a-1;
}