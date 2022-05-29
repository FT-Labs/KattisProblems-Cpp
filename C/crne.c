#include <stdio.h>
#define SQR(x) (x) * (x)


int main ()
{
    long n;
    scanf("%ld", &n);
    printf("%ld\n", (n%2 == 0 ? SQR(n/2+1): SQR(n/2+1)+(n/2+1)));
    return 0;
}
