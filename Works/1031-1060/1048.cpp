#include <iostream>
int main()
{
    for (int i = 0; i < 45; i++)
    {
        for (int j = 0; j < 45; j++)
        {
            if (i * i + j * j == 2017)
            {
                std::cout << i << " " << j << "\n";
            }
        }
    }
}