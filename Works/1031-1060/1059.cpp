#include <iostream>
using std::cin;
using std::cout;
int main()
{
    int t=0, r=0, ti, rest = 0;
    cin >> ti;
    if(ti<20&&ti>10)
    {
        r=-ti*9+90;
    }
    for (; 10 <= ti; ti = ti - 10)
    {
        if (rest == 0)
        {
            if (t >= r)
            {
                r = r + 90;
            }
            else
            {
                rest = 2;
            }
        }
        else
        {
            rest--;
        }
        t = t + 30;
    }

    if (rest == 0)
    {
        r = r + ti * 9;
    }
    t = t + ti * 3;
    cout << r << " " << t;
    cin >>ti;
}