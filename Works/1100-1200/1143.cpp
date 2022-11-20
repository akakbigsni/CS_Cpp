#include <iostream>
#include <string>
int main()
{
    char X[100], low[26] = {}, up[26] = {};
    int let[26] = {};
    for (char i = 0; i <= 25; i++)
    {
        low[i] = 'a' + i;
        up[i] = 'A' + i;
    }
    std::cin.getline(X, 100);
    for (int i = 0; i < 100; i++)
    {
        if (X[i] == '#')
            break;
        for (int j = 0; j + 1 <= 26; j++)
        {
            if ((X[i] == low[j]) || (X[i] == up[j]))
                let[j]++;
        }
    }
    for (int i = 0; i + 1 <= 26; i++)
    {
        if (let[i] != 0)
            std::cout << up[i] << "(" << low[i] << "):" << let[i] << "\n";
    }
    std::cin.getline(X, 100);
}