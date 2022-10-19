#include <iostream>
#include <algorithm>
int main()
{
    int M, N, m = 1;
    std::cin >> M >> N;
    int a[N + 1];
    a[1]=M-1,a[2]=1;
    for(int i=2;i<=std::min(M,N);)
    {
        if(a[i]==0)
        i++;
        for(int j=1;;j++)
        {
            if(a[1]-a[2]>=2)
            {
                m+=(a[1]-a[2])/2+1;
                a[0]=a[1]+a[2],a[2]=a[0]/2,a[1]=a[0]-a[2];
                
            }
            switch (a[1]-a[j+1])
            {
            case 2:
                
                break;
            
            default:
                break;
            }
        }
    }
    if (M == 0 || N == 0) //排除M或N为0
        std::cout << 0;
    else
        std::cout << m;
    std::cin >> M >> N;
}