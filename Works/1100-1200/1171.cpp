#include<iostream>
int main()
{
    int n,a=-2,b=-2,c=1,d=1;
    std::cin >>n;
    for(int i=1;i<=n;i++)
    {
        a=b;
        std::cin >>b;
        if(b-a==1)
        c++;
        if(c>d)
        d=c;
        if(b-a!=1)
        c=1;
    }
    std::cout <<d;
}