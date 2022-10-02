#include <cmath>
#include <iostream>
int main()
{
    int a, i, j, m, n=0;
    bool not_leap = true;
    std::cin >> a;
    for (i = a; not_leap; ++j)
    {
        if (i % 4 != 0)
            not_leap = true;
        else if (i % 100 != 0)
            not_leap = false;
        else if (i % 400 != 0)
            not_leap = true;
        else
        {
            not_leap = false;
        }
        if (not_leap)
        {
            ++i;
        }
    }
    not_leap = true;
    for (m = a; not_leap; ++n)
    {
        if (m % 4 != 0)
            not_leap = true;
        else if (m % 100 != 0)
            not_leap = false;
        else if (m % 400 != 0)
            not_leap = true;
        else
        {
            not_leap = false;
        }
        if (not_leap)
        {
            --m;
        }
    }
    if (j == n && j != 1)
    {
        std::cout << m << " " << i;
    }
    else
    {
        if (j < n)
        {
            std::cout << i;
        }
        else
        {
            std::cout << m;
        }
    }
}