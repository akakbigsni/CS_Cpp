#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
int ath_prime(int a)
{
    int b, prime[a];
    prime[0]=2;
    for (int i = 3; b + 1 < a; i++)
    {
        for (int n = 0; i % prime[n] != 0; n++)
        {
            if (n == b)
            {
                b++;
                prime[b] = i;
            }
        }
    }
    return prime[b];
}
int main()
{
    int a;
    cin >> a;
    a = ath_prime(a);
    cout << a;
}