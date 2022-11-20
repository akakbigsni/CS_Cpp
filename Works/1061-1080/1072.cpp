#include <iostream>
#include <algorithm>
#include <cmath>
int main()
{
    int M, N, m = 1;
    std::cin >> M >> N;
    int a[std::min(M, N) + 3];
    a[1] = M - 1, a[2] = 1;
    for (int i = 3; i - 2 <= std::min(M, N); i++) //初始化数组
        a[i] = 0;
    for (int i = 2; i <= std::min(M, N);)
    {
        if(M==N&&i==M)
        break;
        for (i = 2; a[i + 1] != 0; i++) // i为不为0的位数
        {
        }
        if (i > std::min(M, N))
            break;
        //std::cout << i << "i\n";
        for (int j = 2; j <= i + 1;)
        {

            if (a[1] - a[2] >= 2)
            {
                m += (a[1] - a[2]) / 2 + 1;
                a[0] = a[1] + a[2], a[2] = a[0] / 2, a[1] = a[0] - a[2];
                /*
                std::cout << "比较前两位，放法:" << m << "\n";
                std::cout << a[1] << " ";
                std::cout << a[2] << " ";
                std::cout << a[3] << "是前三位，总位数：" << i << "\n";
                */
            }
            if (a[1] - a[j + 1] >= 2)
            {
                if (a[j + 1] == 0)
                    i++;
                if (i > std::min(M, N))
                    break;
                a[j + 1]++, a[0] = 0;
                for (int k = 0; j - k > 0; k++)
                {
                    a[0] += a[j - k];
                    //std::cout << a[0] << "a0\n";
                    a[j - k] = a[j + 1];
                }
                a[1] = a[0] - (j - 1) * a[j + 1] - 1;
                if (a[1] - a[2] == 1 || a[1] - a[2] == 0)
                    m++;
                    /*
                std::cout << a[1] << " ";
                std::cout << a[2] << " ";
                std::cout << a[3] << "向后退位自肃，总位数：" << i << "\n";
                */
                break;
            }
            else
                j++;
        }
    }
    if (M == 0 || N == 0) //排除M或N为0
        std::cout << 0;
    else
        std::cout << m;
    std::cin >> M >> N;
}