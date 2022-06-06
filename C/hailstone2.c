#include <stdio.h>

int solve(unsigned long n)
{
    int cnt = 1;
    while (n != 1)
    {
        ++cnt;
        if (n%2 == 0)
            n /= 2;
        else
            n = 3*n + 1;
    }
    return cnt;
}

int main ()
{
    unsigned long n;
    scanf("%lu", &n);

    printf("%d\n", solve(n));

    return 0;
}
