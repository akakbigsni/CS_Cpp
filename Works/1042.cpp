#include <iostream>
#include <cstring>
using namespace std;

#define N 1000
int main()
{
    char X[N];
    cin.getline(X, N);
    int a = 0, b = 0;
    for (int i = 0; i < strlen(X); i++)
    {
        if (X[i] == '\r')
            break;
        if (X[i] >= '0' && X[i] <= '9')
            a++;
    }
    cout << a;
    return 0;
}