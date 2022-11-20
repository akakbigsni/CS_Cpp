#include <iostream>
#include <algorithm>
int main()
{
    int a[10], pmax, pmin, nmax, nmin,p=0;
    double pavg, navg;
    for (int i = 0; i + 1 <= 10; i++)
    {
        std::cin >> a[i];
        if (a[i] >= 0)
        {
            p++;
            if(p==1)
            pmin=a[i];
            pmax = std::max(pmax, a[i]), pmin = std::min(pmin, a[i]), pavg += a[i];
        }
        else
        {
            if(i-p==0)
            nmax=a[i];
            nmax = std::max(nmax, a[i]), nmin = std::min(nmin, a[i]), navg += a[i];
        }
    }
    if(p!=0&&p!=10)
    pavg /= p, navg /= 10-p;
    std::cout << pmax << " " << pmin << " " << pavg << "\n"
              << nmax << " " << nmin << " " << navg;
}