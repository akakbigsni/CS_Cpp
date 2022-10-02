#include <iostream>
#include <cstring>
using namespace std;

#define N 1000
int main()
{
    char X[N];
    cin.getline(X, N);
    int a = 1, b = 0;
    for (int i = 0; i < strlen(X); i++)
    {
        if (X[i] == '\r')
            break;
        if (X[i + 1] == ' ' && ((X[i] >= 'a' && X[i] <= 'z') || (X[i] >= 'A' && X[i] <= 'Z')))
            a++;
    }
    cout << a;
    return 0;
}