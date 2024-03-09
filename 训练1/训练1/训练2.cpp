#include <iostream>
#include <map>
using namespace std;
int f(int x)
{
    int f = 0;
    while(x > 0)
    {
        f = f + (x % 10) * (x % 10);
        x /= 10;
    }
    return f;
}
int ff(int x)
{
    int ff = 0;
    while (x > 0)
    {
        ff += x % 10;
        if (ff > 1)
            return 0;
        x /= 10;
    }
    if (ff == 1)
        return 1;
    else
        return 0;
}
int main()
{
    int a, b;
    cin >> a >> b;
    map<int, int>c;
    for (int i = a; i <= b; i++)
    {
        bool flag[10000] = { false };
        int j = 0, x = i;
        while (1)
        {
            if (ff(x))
            {
                for (int m = 1; m < 10000; m++)
                {
                    if (flag[m] && m != i)
                    {
                        c[m] = 100000;
                    }
                }
                if (c[i] != 100000)
                    c[i] = j;
                break;
            }
            if (flag[x])
            {
                c[i] = 100000;
                break;
            }
            j++;
            flag[x] = true;
            x = f(x);
        }
    }
    for (int i = a; i <= b; i++)
    {
        if (c[i] != 100000)
            cout << i << " " << c[i] << "\n";
    }
    return 0;
}