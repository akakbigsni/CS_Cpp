#include<iostream>
using std::cout;
int main()
{
    int N,n,l=0;
    std::cin >>n;
    N=(n*n+n)/2;
    for(int i=1;i<=N;i++)
    {
        if(i<=9)
        cout <<0;
        cout <<i;
        if(i-l==n)
        cout <<'\n',l=i,n--;
    }
}