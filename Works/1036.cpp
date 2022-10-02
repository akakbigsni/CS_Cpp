#include <cmath>
#include <iostream>
int main()
{
    int d0, h0, m0, d1, h1, m1;
    std::cin >> d0 >> h0 >> m0 >> d1 >> h1 >> m1;
    if (m1 < m0)
    {
        m0 = m1 - m0 + 60;
        if (h1 - 1 < h0)
        {
            h0 = h1 - h0 + (d1 - d0 - 1) * 24;
        }
    }
    else
    {
        m0 = m1 - m0;
        h0 = h1 - h0 + (d1 - d0) * 24;
    }
    std::cout << h0 << " " << m0;
}