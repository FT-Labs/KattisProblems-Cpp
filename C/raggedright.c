#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SQR(x) (x) * (x)
#define MAX(x,y) (x) > (y) ? (x) : (y)


int main ()
{
    static int arr[100];
    int mx = 0, i = 0;
    char s[81];

    while (fgets(s, 81, stdin))
    {
        arr[i++] = strlen(s);
        mx = MAX(mx, arr[i-1]);
    }

    long ans = 0;

    for (int j = 0; j < i-1; j++)
        ans += (SQR(mx - arr[j]));

    printf("%ld\n", ans);

    return 0;
}
