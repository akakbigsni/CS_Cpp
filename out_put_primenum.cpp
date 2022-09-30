#include <iostream>
using namespace std;

int main()
{

  int i, j, k, m, n;
  bool is_prime;

  cout << "Print prime number under:";
  cin >> j;

  for (n = 2; n <= j; ++n)
  {
    is_prime = true;
    // loop to check if n is prime
    for(; i * i <= n; ++i)
    m = i;
    for (i = 2; i <= m; ++i)
    {
      if (n % i == 0)
      {
        is_prime = false;
        break;
      }
    }

    if (is_prime)
    {  
      cout << n << "\t";
      ++k;
    }
  }
  cout << "\n There are " << k << " prime numbers in total under " << j << endl;
  cout << "\n Press enter or other keys to exit";
  cin >> i;
  return 0;
}
