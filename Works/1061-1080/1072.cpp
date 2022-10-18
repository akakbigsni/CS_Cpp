#include <iostream>
#include <algorithm>
int main()
{
    int M, N, m = 1;
    std::cin >> M >> N;
    int a[N + 1];
    a[0] = a[1] = M - 1, a[2] = 1;
    for (int i = 2; i <= std::min(M, N); i++) //排除N>M
    {
        if (a[1] - 2 >= a[2])
        {
            m += (a[1] - a[2]) / 2 + 1;
            std::cout << m << "\n";
            a[2] += m - 1;
        }
        for (int j = 2; i - j > 0; j++)
        {

            if (a[j] - 2 >= a[j + 1])
            {
                a[j + 1]++;
                for (int k; j - k >= 2; k++)
                {
                    a[j - k] = a[j + 1];
                }
                a[0] -= j, a[1] = a[0]; 
                if(a[1]<a[2])
                break;
                m++, j = 2;
                break;
            }
        }
        a[0] = M - i;
        for (int k; i - k >= 2; k++)
        {
            a[i - k] = 1;
        }
    }
    if (M == 0 || N == 0) //排除M或N为0
        std::cout << 0;
    else
        std::cout << m;
    std::cin >> M >> N;
}