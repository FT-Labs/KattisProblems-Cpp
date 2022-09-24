#include <stdio.h>

long long gcd(long long a, long long b)
{
    if (a == b)
        return a;
    if (a < b)
        return gcd(a, b-a);
    return gcd(a-b, b);
}


int main ()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", gcd(a, b));

    return 0;
}
